#include "../header/main.hpp"
#include <iostream>
#include <string>

int main() {

    std::string full_name{};
    std::string planet{"Earth, where the sky is blue"};
    std::string preferred_planet{planet};

    std::string message{"Hello there", 7}; /* print seven first character */
    std::string weird_message{48, 'e'};
    std::string greeting{"Hello World"};
    // std::string say_hello{greeting, 6, 5};

    std::cout << "full name is: " << full_name << full_name << NL;
    std::cout << "planet is: " << planet << NL;
    std::cout << "preferred planet is: " << preferred_planet << NL;
    std::cout << "message is: " << message << NL;
    std::cout << "weird message: " << weird_message << NL;
    std::cout << "greeting is: " << greeting << NL;

    std::cout << "\n #(21:36:50): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
