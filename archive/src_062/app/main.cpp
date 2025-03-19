#include "../header/main.hpp"
#include <iostream>

int main() {

    std::string name{"hinata chikao"}; // size = 13

    std::cout << "value of name is: " << name << NL;
    std::cout << "size of the name is: " << name.size() << NL;

    const size_t size{name.size()};

    LINEFEED;
    LINEFEED;
    std::cout << "print name value in for loop:" << NL;
    for (size_t i{util::zero}; i < size; ++i) {
        std::cout << name[i] << SP;
    }

    LINEFEED;
    LINEFEED;
    std::cout << "print name value in range base for loop: " << NL;
    for (const char &item: name) {
        std::cout << item << SP;
    }

    LINEFEED;
    LINEFEED;
    std::cout << "print name value in for loop by 'at' function: " << NL;
    for (size_t i{util::zero}; i < size; ++i) {
        std::cout << name.at(i) << SP;
    }

    LINEFEED;
    LINEFEED;


    std::cout << "\n #(19:02:32): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
