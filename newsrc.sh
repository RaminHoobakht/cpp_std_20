#! /bin/bash

clear
ls -ls archive/src_*
echo "enter file number: "
read -r fileno

git add --all
git commit -m 'before creating new source file'

mv src/ archive/src_"$fileno"
cp CMakeLists.txt archive/src_"$fileno"/
cp cmake_defaulte.txt CMakeLists.txt

mkdir src
mkdir src/app
mkdir src/header

now="$(date +"%T")"

printf '%s\n' "#include <iostream>
#include \"../header/main.hpp\"


int main() {



    std::cout << \"\n #($now): The End ...\" << std::endl;
    return EXIT_SUCCESS;
}" >> src/app/main.cpp

printf '%s\n' "#ifndef HEADER_MAIN_CPP
#define HEADER_MAIN_CPP

#include <iostream>

#define NL          '\n'
#define RT          '\r'
#define SP          '\x20'
#define LINE_FEED   std::cout << NL
#define SEP         util::separator()

namespace util {

    constexpr size_t zero{0LU};

    void separator(size_t, char) noexcept;


    inline void separator(const size_t no = 64, const char ch = '-') noexcept {
        for (size_t i{zero}; i < no; ++i) {
            std::cout << ch;
        }
        std::cout << NL;
    }


} // namespace util

#endif /* HEADER_MAIN_CPP */" >> src/header/main.hpp

git add --all
git commit -m 'new source file'

