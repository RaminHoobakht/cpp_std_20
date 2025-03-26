/*  */

#include "../header/main.hpp"
#include <iostream>
#include <string_view>


int main() {

    std::string_view sv1{
            "Helloooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo"
            "ooooooooooooooooooooooooooooooooooooooooooooo"};
    std::string_view sv2{sv1};
    std::string_view sv3{sv2};

    std::cout << "size of string_view: " << sizeof(std::string_view) << NL;
    std::cout << "size of sv1: " << sizeof(sv1) << NL;

    std::cout << "sv1: " << sv1 << NL;
    std::cout << "sv2: " << sv2 << NL;
    std::cout << "sv3: " << sv3 << NL;


    std::cout << "\n #(15:37:32): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
