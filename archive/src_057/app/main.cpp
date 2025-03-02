#include "../header/main.hpp"
#include <iostream>


int main() {
    /* Code */

    const std::string str1{"I am a C/C++ Developer ..."};

    const size_t size{str1.size()};
    for (size_t i{util::zero}; i < size; ++i) {
        std::cout << str1.at(i) << SP;
    }
    LINE_FEED;
    SEP;


    const std::string str2{"I am learning Japanese language ..."};
    char char_front{str2.front()};
    char char_back{str2.back()};

    std::cout << "str2: " << str2 << NL;
    std::cout << "back character: " << char_back << NL;
    std::cout << "front charater: " << char_front << NL;
    LINE_FEED;
    SEP;

    char_back = 'b';
    char_front = 'f';
    std::cout << "str2 after change the back and front variable: " << NL;
    std::cout << "str2: " << str2 << NL;
    LINE_FEED;
    SEP;

    std::cout << "\n #(17:09:17): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
