cmake_minimum_required(VERSION 3.31)

project(
        cpp_result
        VERSION 0.1
        DESCRIPTION "Training C++"
        LANGUAGES CXX C ASM
)

# C/C++ Standards
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable current dir includes
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Options for external features
option(USE_POCO "Enable POCO libraries" OFF)
option(USE_PGSQL "Enable PostgreSQL support" OFF)
option(USE_PYTHON "Enable Python integration" OFF)

# set(CMAKE_TOOLCHAIN_FILE "")
# set(CMAKE_C_COMPILER "/usr/bin/gcc-14")
# set(CMAKE_CXX_COMPILER "/usr/bin/g++-14")

# Project source files
add_executable(${PROJECT_NAME}
        src/app/main.cpp
        src/util/util.cpp
)

# Add include directories
target_include_directories(${PROJECT_NAME} PRIVATE
        src/app
        src/util
)

# Compiler warnings & flags
target_compile_options(${PROJECT_NAME} PRIVATE
        -std=gnu++26
        -O0
        -g3
        -fmessage-length=0
        -fstack-protector
        -pthread
        -pedantic
        -Wall
        -Wextra
        -Wconversion
        -Wcast-align
        -Wcast-qual
        -Wdisabled-optimization
        -Wlogical-op
        -Wmissing-declarations
        -Wmissing-include-dirs
        -Wredundant-decls
        -Wshadow
        -Wsign-conversion
        -Wswitch-default
        -Wundef
        -Wfloat-equal
        -Wctor-dtor-privacy
        -Wformat=2
        -Winit-self
        -Wnoexcept
        -Wold-style-cast
        -Wsign-promo
        -Woverloaded-virtual
        -Wstrict-null-sentinel
        -Wstrict-overflow=5
        -Werror
        -Wno-unused
        -Weffc++
        -Winline
        -Winvalid-pch
        -Wstrict-aliasing=2
        -Wstack-protector
        -Wswitch-enum
        -Wunsafe-loop-optimizations
        -Wunused-parameter
        -Wformat-nonliteral
        -Wformat-security -Wpacked
        -Wimport -Wwrite-strings
        -Wvariadic-macros
        -Wmissing-field-initializers
        -Wmissing-format-attribute
        -Wunused-parameter
        -Wunreachable-code
        -Wunused
        -Wpointer-arith
        -Wmissing-noreturn
        -Wpadded
        -v
        -fPIC
        -fPIE
        -m64
        -march=corei7-avx
)


# Optional: Link math library
find_library(MATH_LIBRARY m)
if (MATH_LIBRARY)
    target_link_libraries(${PROJECT_NAME} PRIVATE ${MATH_LIBRARY})
endif ()

# Optional: CURL
find_library(CURL_LIBRARY curl)
if (CURL_LIBRARY)
    target_link_libraries(${PROJECT_NAME} PRIVATE ${CURL_LIBRARY})
endif ()

# Optional: PostgreSQL
if (USE_PGSQL)
    find_library(PQ_LIBRARY pq)
    find_library(PQX_LIBRARY pqxx)
    if (PQ_LIBRARY AND PQX_LIBRARY)
        target_link_libraries(${PROJECT_NAME} PRIVATE ${PQ_LIBRARY} ${PQX_LIBRARY})
    endif ()
endif ()

# Optional: Python
if (USE_PYTHON)
    find_package(Python3 COMPONENTS Interpreter Development REQUIRED)
    target_link_libraries(${PROJECT_NAME} PRIVATE Python3::Python)
endif ()

# Optional: POCO libraries
if (USE_POCO)
    find_package(Poco REQUIRED COMPONENTS
            Foundation
            JSON
            Net
            XML
            Util
            NetSSL
            Encodings
            Crypto
            JWT
            Data
            MongoDB
            Redis
    )
    target_link_libraries(${PROJECT_NAME} PRIVATE Poco::Foundation Poco::JSON Poco::Net Poco::Util Poco::Crypto)
endif ()

# Install instructions
include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

configure_file(config.h.in config.h)
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}")
