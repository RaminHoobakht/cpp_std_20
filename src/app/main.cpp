/*  */

#include <iostream>
#include "../header/utillib.hpp"

void print_name(const std::string_view &name) noexcept(true);

int main() {

    std::string_view my_name{"Hinata Chikao"};

    print_name(my_name);

    std::cout << "\n #(20:51:43): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

void print_name(const std::string_view &name) noexcept(true) {
    std::cout << "name is: " << "Mr. " << name << NL;
}
