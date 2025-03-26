/*
    std::string_view has most of the methods
    we are familiar with std::string
*/

#include "../header/main.hpp"
#include <iostream>
#include <string_view>


int main() {

    LINEFEED;

    std::string_view sv{"an apple a day keeps the doctor away"};

    std::cout << "sv length: " << sv.length() << NL;
    std::cout << "sv front : " << sv.front() << NL;
    std::cout << "sv back  : " << sv.back() << NL;
    std::cout << "sv substr: " << sv.substr(2, 15) << NL;


    std::cout << "\n #(15:02:04): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
