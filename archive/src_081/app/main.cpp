#include "../header/main.hpp"
#include <iostream>
#include <string>

int main() {

    std::string message{"   Iran   "};
    char name[]{"    hinata    "};

    std::string str_name{name};

    (void) util::trim(message, true, true);
    (void) util::trim(str_name, true, true);


    std::cout << "message trim function invocation: " << message << NL;
    std::cout << "message trim function invocation: " << str_name << NL;

    std::cout << "\n #(19:38:01): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

/* --------------------- */
