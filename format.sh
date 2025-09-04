#! /bin/bash

 find src/ -type f \( -name "*.cpp" -o -name "*.hpp" \) -exec clang-format --assume-filename=.clang-format --sort-includes -i {} \;
