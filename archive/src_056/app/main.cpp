#include <iostream>
#include "../header/main.hpp"


int main() {
    /* Code */

    const std::string str1{"I am a C/C++ Developer ..."};

    std::cout << "accessing to the str1 characters in normal for loop: " << NL;
    const size_t size = str1.size();
    for (size_t i{util::zero}; i < size; ++i) {
        std::cout << str1[i] << SP;
    }
    LINE_FEED;
    SEP;

    std::cout << "accessing to the str1 characters in range base loop: " << NL;
    for (const char &item: str1) {
        std::cout << item << SP;
    }
    LINE_FEED;
    SEP;

    std::cout << "\n #(16:25:11): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
