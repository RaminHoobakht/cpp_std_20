#include <iostream>
#include <cctype>
#include "../header/main.hpp"

int main() {
    /* code */

    constexpr char msg[]{"I am a C/C++ Developer ..."};
    constexpr size_t length{std::size(msg)};
    size_t blank_count{};

    for (size_t i{0LLU}; i < length; ++i) {
        if (std::isblank(*(msg + i)) != 0) {
            blank_count++;
        }
    }

    std::cout << "number of blank is: " << blank_count << NL;

    std::cout << "\n #(12:20:07): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
