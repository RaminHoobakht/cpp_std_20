/* string to string_view conversion */

#include <iostream>
#include "../header/utillib.hpp"

void say_my_name(const std::string &name) noexcept;
void process_name(std::string_view name) noexcept;

int main() {

    process_name("Daniel");

    std::cout << "\n #(02:17:17): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

void say_my_name(const std::string &name) noexcept {
    std::cout << "Your name is: " << name << NL;
}

void process_name(std::string_view name) noexcept {

    // say_my_name(name); /* compile time error */
    say_my_name(std::string(name));
}
