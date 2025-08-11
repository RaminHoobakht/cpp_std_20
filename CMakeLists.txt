cmake_minimum_required(VERSION 4.1.0)

project(
        STD202
        VERSION 0.1
        DESCRIPTION "Training C++"
        LANGUAGES C CXX ASM
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
option(USE_NATIVE_ARCH "Enable native architecture tuning" OFF)

# Optional architecture flags
if (USE_NATIVE_ARCH)
    add_compile_options(-march=native -mtune=native)
else ()
    add_compile_options(-m64 -march=corei7-avx)
endif ()

# Source files
set(SOURCES
        src/app/main.cpp
        src/app/shape.cpp
        src/app/oval.cpp
        src/app/circle.cpp
        src/util/util.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE
        src/app
        src/util
        ${PROJECT_BINARY_DIR}
)

# Compiler warnings and flags
target_compile_options(${PROJECT_NAME} PRIVATE
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
        -fPIC
        -fPIE
)

# Optional libraries
find_library(MATH_LIBRARY m)
if (MATH_LIBRARY)
    target_link_libraries(${PROJECT_NAME} PRIVATE ${MATH_LIBRARY})
endif ()

find_library(CURL_LIBRARY curl)
if (CURL_LIBRARY)
    target_link_libraries(${PROJECT_NAME} PRIVATE ${CURL_LIBRARY})
endif ()

if (USE_PGSQL)
    find_library(PQ_LIBRARY pq)
    find_library(PQX_LIBRARY pqxx)
    if (PQ_LIBRARY AND PQX_LIBRARY)
        target_link_libraries(${PROJECT_NAME} PRIVATE ${PQ_LIBRARY} ${PQX_LIBRARY})
    endif ()
endif ()

if (USE_PYTHON)
    find_package(Python3 COMPONENTS Interpreter Development REQUIRED)
    target_link_libraries(${PROJECT_NAME} PRIVATE Python3::Python)
endif ()

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

    target_link_libraries(${PROJECT_NAME} PRIVATE
            Poco::Foundation
            Poco::JSON
            Poco::Net
            Poco::Util
            Poco::Crypto
    )
endif ()

# Configuration file
configure_file(config.h.in config.h)

# Installation rules
include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

# Packaging
set(CPACK_PACKAGE_NAME "STD202")
set(CPACK_PACKAGE_VERSION "${PROJECT_VERSION}")
set(CPACK_GENERATOR "TGZ;DEB")
include(CPack)
