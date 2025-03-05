#include <iostream>
#include "../header/main.hpp"


int main() {
    /* code */

    std::string message{"I am a C/C++ Developer ..."};
    std::cout << "message is: " << message << NL;

    message[0] = 'Y';
    std::cout << "message is: " << message << NL;

    message.at(0) = 'O';
    std::cout << "message is: " << message << NL;

    std::cout << "\n #(22:22:37): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
