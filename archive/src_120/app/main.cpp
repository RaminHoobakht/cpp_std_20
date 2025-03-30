/* passign string to the functoin with std::string_view (Good) */

#include <iostream>
#include "../header/utillib.hpp"

void say_my_name(std::string_view name) noexcept;

int main() {

    std::string my_name{"Hinatai Chikao"};

    say_my_name(my_name);
    say_my_name("Daniel");
    say_my_name(std::string_view("Raphael"));

    std::cout << "\n #(21:33:42): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

void say_my_name(std::string_view name) noexcept {
    std::cout << "Your name is: " << name << NL;
}
