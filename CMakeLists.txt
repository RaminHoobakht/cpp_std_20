cmake_minimum_required(VERSION 4.1.0)  # Increased for better C++26 support

project(
    concepts
    VERSION 0.1.0
    DESCRIPTION "Mathematical C++ Training with Euler Projects"
    LANGUAGES C CXX
    HOMEPAGE_URL "https://github.com/yourusername/euler-projects"
)

# Modern CMake approach - set policies
cmake_policy(SET CMP0077 NEW)  # option() honors normal variables

# C++ Standards with explicit features
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable current dir includes
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Project-specific options
option(USE_POCO "Enable POCO libraries" OFF)
option(USE_PGSQL "Enable PostgreSQL support" OFF)
option(USE_PYTHON "Enable Python integration" OFF)
option(USE_NATIVE_ARCH "Enable native architecture tuning" OFF)
option(USE_STRICT_WARNINGS "Enable maximum compiler warnings" ON)
option(USE_SANITIZERS "Enable address/undefined behavior sanitizers" OFF)
option(USE_LTO "Enable Link Time Optimization" OFF)

# ============================================================================
# CRITICAL FOR STD::FLOAT128_T SUPPORT
# ============================================================================
# Check for GCC and C++26 features
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    # Minimum GCC version check for C++26 features
    if(CMAKE_CXX_COMPILER_VERSION VERSION_LESS 13.0)
        message(WARNING "GCC < 13.0 may not fully support C++26 features including std::float128_t")
    endif()
    
    # Essential flags for std::float128_t and high-precision math
    add_compile_options(
        -fext-numeric-literals  # Required for float128_t literals support
    )
endif()

# Optional architecture flags
if(USE_NATIVE_ARCH)
    add_compile_options(-march=native -mtune=native)
else()
    add_compile_options(-m64 -march=x86-64-v3)  # More modern than corei7-avx
endif()

# Source files
set(SOURCES
    src/app/main.cpp
    src/util/util.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

# Include directories - modern approach
target_include_directories(${PROJECT_NAME} PRIVATE
    src/app
    src/util
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

# ============================================================================
# OPTIMIZED COMPILER FLAGS FOR YOUR PROJECT
# ============================================================================
target_compile_options(${PROJECT_NAME} PRIVATE
    # Debugging and optimization (consider -O2 for release)
    $<$<CONFIG:Debug>:-O0 -g3 -fno-omit-frame-pointer>
    $<$<CONFIG:Release>:-O3 -DNDEBUG>
    
    # Essential for your mathematical computations
    -ffp-contract=fast           # Better floating-point performance
    -fexcess-precision=fast       # Important for float128_t
    
    # Security and hardening
    -fstack-protector-strong
    -D_FORTIFY_SOURCE=2
    -fPIC
    -fPIE
)

# Strict warnings (optional based on USE_STRICT_WARNINGS)
if(USE_STRICT_WARNINGS)
    target_compile_options(${PROJECT_NAME} PRIVATE
        -Wall
        -Wextra
        -Wpedantic
        -Wshadow
        -Wconversion
        -Wsign-conversion
        -Wnull-dereference
        -Wdouble-promotion        # Important for float128_t work!
        -Wformat=2
        -Wundef
        # ----------------------#
        -fmessage-length=0
        -fstack-protector
        -pthread
        -pedantic
        -Wcast-align
        -Wcast-qual
        -Wdisabled-optimization
        -Wmissing-declarations
        -Wmissing-include-dirs
        -Wredundant-decls
        -Wswitch-default
        -Wfloat-equal
        -Wctor-dtor-privacy
        -Winit-self
        -Wnoexcept
        -Wold-style-cast
        -Wsign-promo
        -Woverloaded-virtual
        -Wstrict-null-sentinel
        -Wstrict-overflow=5
        -Werror
        -Weffc++
        -Winline
        -Winvalid-pch
        -Wstrict-aliasing=2
        -Wstack-protector
        -Wswitch-enum
        -Wunsafe-loop-optimizations
        -Wunused-parameter
        -Wformat-nonliteral
        -Wformat-security
        -Wpacked
        -Wimport
        -Wwrite-strings
        -Wvariadic-macros
        -Wmissing-field-initializers
        -Wmissing-format-attribute
        -Wunreachable-code
        -Wpointer-arith
        -Wmissing-noreturn
        -Wpadded
        -v
    )
    
    # GCC-specific warnings
    if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
        target_compile_options(${PROJECT_NAME} PRIVATE
            -Wduplicated-cond
            -Wduplicated-branches
            -Wlogical-op
            -Wuseless-cast
        )
    endif()
endif()

# Sanitizers for debugging
if(USE_SANITIZERS)
    target_compile_options(${PROJECT_NAME} PRIVATE
        -fsanitize=address
        -fsanitize=undefined
        -fsanitize=float-divide-by-zero
        -fsanitize=float-cast-overflow
    )
    target_link_options(${PROJECT_NAME} PRIVATE
        -fsanitize=address
        -fsanitize=undefined
    )
endif()

# Link Time Optimization
if(USE_LTO)
    target_compile_options(${PROJECT_NAME} PRIVATE -flto)
    target_link_options(${PROJECT_NAME} PRIVATE -flto)
endif()

# ============================================================================
# ESSENTIAL LIBRARIES FOR MATHEMATICAL COMPUTATIONS
# ============================================================================
# Math library (CRITICAL for std::sqrt, std::pow with float128_t)
find_library(MATH_LIBRARY m REQUIRED)  # Make it REQUIRED for your project
target_link_libraries(${PROJECT_NAME} PRIVATE ${MATH_LIBRARY})

# Position Independent Executable for security
target_link_options(${PROJECT_NAME} PRIVATE -pie)

# Optional libraries with better error handling
find_package(CURL QUIET)
if(CURL_FOUND)
    target_link_libraries(${PROJECT_NAME} PRIVATE CURL::libcurl)
else()
    find_library(CURL_LIBRARY curl QUIET)
    if(CURL_LIBRARY)
        target_link_libraries(${PROJECT_NAME} PRIVATE ${CURL_LIBRARY})
    endif()
endif()

# PostgreSQL (simplified)
if(USE_PGSQL)
    find_package(PostgreSQL QUIET)
    if(PostgreSQL_FOUND)
        target_link_libraries(${PROJECT_NAME} PRIVATE PostgreSQL::PostgreSQL)
    else()
        message(WARNING "PostgreSQL not found - disabling USE_PGSQL")
        set(USE_PGSQL OFF CACHE BOOL "Enable PostgreSQL support" FORCE)
    endif()
endif()

# Python (modern approach)
if(USE_PYTHON)
    find_package(Python3 COMPONENTS Interpreter Development)
    if(Python3_FOUND)
        target_link_libraries(${PROJECT_NAME} PRIVATE Python3::Python)
    else()
        message(WARNING "Python3 not found - disabling USE_PYTHON")
        set(USE_PYTHON OFF CACHE BOOL "Enable Python integration" FORCE)
    endif()
endif()

# POCO libraries
if(USE_POCO)
    find_package(Poco QUIET COMPONENTS Foundation JSON Net Util Crypto)
    if(Poco_FOUND)
        target_link_libraries(${PROJECT_NAME} PRIVATE 
            Poco::Foundation
            Poco::JSON
            Poco::Net
            Poco::Util
            Poco::Crypto
        )
    else()
        message(WARNING "POCO libraries not found - disabling USE_POCO")
        set(USE_POCO OFF CACHE BOOL "Enable POCO libraries" FORCE)
    endif()
endif()

# ============================================================================
# CONFIGURATION AND INSTALLATION
# ============================================================================
# Configuration file with compiler feature detection
configure_file(config.h.in config.h @ONLY)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

# Installation rules
include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

# Create a target for running your Euler problems
add_custom_target(run
    COMMAND ${PROJECT_NAME}
    DEPENDS ${PROJECT_NAME}
    COMMENT "Running Euler Projects executable"
)

# Packaging
set(CPACK_PACKAGE_NAME "EulerProjects")
set(CPACK_PACKAGE_VENDOR "Your Name")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Mathematical C++ Training Projects")
set(CPACK_PACKAGE_VERSION "${PROJECT_VERSION}")
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
set(CPACK_GENERATOR "TGZ;DEB")
include(CPack)

# ============================================================================
# SUMMARY OUTPUT
# ============================================================================
message(STATUS "")
message(STATUS "Euler Projects Configuration Summary:")
message(STATUS "  C++ Standard: ${CMAKE_CXX_STANDARD}")
message(STATUS "  Compiler: ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")
message(STATUS "  Strict Warnings: ${USE_STRICT_WARNINGS}")
message(STATUS "  Native Arch: ${USE_NATIVE_ARCH}")
message(STATUS "  Float128 Support: Enabled via -fext-numeric-literals")
message(STATUS "")