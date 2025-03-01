#include <iostream>
#include "../header/main.hpp"


int main() {

    const std::string message{"I am a C/C++ Developer ..."};

    for( const char item : message) {
        std::cout << item << '\x20';
    }
    std::cout << '\n';

    std::cout << "\n #(21:59:22): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
