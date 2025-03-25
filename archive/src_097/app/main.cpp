/*  */

#include "../header/main.hpp"
#include <iostream>


int main() {

    LINEFEED;

    const std::string message1{"Hello"};
    const std::string message2{message1};
    const std::string message3{message1};

    std::cout << "address of message1: " << &message1 << NL;
    std::cout << "address of message2: " << &message2 << NL;
    std::cout << "address of message3: " << &message3 << NL;

    std::cout << "\n #(16:19:25): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
