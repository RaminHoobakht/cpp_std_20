/* passnig in a std::string (BAD) */

#include <iostream>
#include "../header/utillib.hpp"

void say_my_name(std::string &name) noexcept;
void say_my_name(const std::string &name) noexcept;
void display_my_name(std::string &name) noexcept;

int main() {

    std::string my_name{"Daniel"};
    const std::string my_name2{"Raphael"};

    /* input type is std::string &name */
    say_my_name(my_name);

    /* input type is const std::string &name */
    say_my_name(my_name2);

    /* input type is const char array */
    display_my_name("Samuel"); /* encounetr with compile time error */

    std::cout << "\n #(21:00:17): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

void say_my_name(std::string &name) noexcept {
    std::cout << "Your name is: " << name << NL;
}

void say_my_name(const std::string &name) noexcept {
    std::cout << "Your name is: " << name << NL;
}

void display_my_name(std::string &name) noexcept {
    std::cout << "Your name is: " << name << NL;
}
