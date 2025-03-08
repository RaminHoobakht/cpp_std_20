#include <iostream>
#include "../header/main.hpp"


int main() {
    /* code */

    std::string message{"I am a C/C++ Developer ..."};

    char &char_back{message.back()};
    char &char_front{message.front()};

    std::cout << "message is: " << message << NL;
    std::cout << "back character is: " << char_back << NL;
    std::cout << "front character is: " << char_front << NL;
    SEP;

    char_back = 'B';
    char_front = 'F';

    std::cout << "message is: " << message << NL;
    std::cout << "back character is: " << char_back << NL;
    std::cout << "front character is: " << char_front << NL;
    SEP;

    std::cout << "\n #(20:25:52): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
