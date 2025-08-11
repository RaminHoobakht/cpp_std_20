#!/bin/bash

# ===== Configuration =====
BUILD_TYPE=${1:-Debug}                 # e.g., Debug, Release
GENERATOR=${2:-"Unix Makefiles"}       # e.g., "Ninja"
INSTALL_AFTER_BUILD=${3:-false}        # true / false
PACKAGE_AFTER_BUILD=${4:-false}        # true / false
USE_POCO=${5:-OFF}                     # Optional: Use POCO libs
USE_PGSQL=${6:-OFF}                    # Optional: PostgreSQL support
USE_PYTHON=${7:-OFF}                   # Optional: Python integration
USE_NATIVE_ARCH=${8:-OFF}              # Optional: Native architecture flags

# ===== Build Directory =====
BUILD_DIR="build"

if [[ $1 == 0 ]]; then
    nice -n 20 ./build/STD202
else
# ===== Create Build Directory and Run CMake =====
echo ">>> Generating build system with CMake..."
nice -n 20 cmake -B "$BUILD_DIR" -S . \
  -DCMAKE_BUILD_TYPE="$BUILD_TYPE" \
  -G "$GENERATOR" \
  -DUSE_POCO="$USE_POCO" \
  -DUSE_PGSQL="$USE_PGSQL" \
  -DUSE_PYTHON="$USE_PYTHON" \
  -DUSE_NATIVE_ARCH="$USE_NATIVE_ARCH" \
  -DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
  -DCMAKE_COLOR_DIAGNOSTICS=ON

# ===== Build the Project =====
echo ">>> Building project..."
nice -n 20 cmake --build "$BUILD_DIR" --clean-first -- -j$(nproc)

# ===== Optional: Install =====
if [ "$INSTALL_AFTER_BUILD" = true ]; then
  echo ">>> Installing project..."
  sudo cmake --install "$BUILD_DIR"
fi

# ===== Optional: Package =====
if [ "$PACKAGE_AFTER_BUILD" = true ]; then
  echo ">>> Packaging project with CPack..."
  cmake --build "$BUILD_DIR" --target package
fi

  nice -n 20 printf '\n'
  nice -n 20 printf '\n'
  #nice -n 20 echo "PRESS ANY KEY TO EXECUTE PROGRAM ..."
  #read
  nice -n 20 ls -lthras ./build/STD202
  nice -n 20 printf '\n'
  nice -n 20 printf '%s\n' "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
  nice -n 20 printf ""
  nice -n 20 ./build/STD202
  nice -n 20 printf '\n'
  nice -n 20 printf '%s\n' "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
fi
