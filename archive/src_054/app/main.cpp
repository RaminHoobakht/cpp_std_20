#include "../header/main.hpp"
#include <iostream>


int main() {
    /* Code */

    std::string str1{"Hello"};
    std::string str2{"Hello"};

    str1 += "67";
    std::cout << "str1: " << str1 << NL;
    util::separator();

    str1 += 67;
    std::cout << "str1: " << str1 << NL;
    util::separator();

    str2 += std::to_string(67);
    std::cout << "str2: " << str2 << NL;
    util::separator();

    std::cout << "Hello" + std::to_string(23.369f) << NL;
    util::separator();

    std::cout << "\n #(21:59:22): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
