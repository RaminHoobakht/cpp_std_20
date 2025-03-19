#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string message{"I am a C/C++ Develoepr ..."};

    std::cout << "before reserve: " << NL;
    std::cout << "size of message    : " << message.size() << NL;
    std::cout << "length of message  : " << message.length() << NL;
    std::cout << "capacity of message: " << message.capacity() << NL;
    util::separator();

    message.reserve(320);

    std::cout << "after reserve: " << NL;
    std::cout << "size of message    : " << message.size() << NL;
    std::cout << "length of message  : " << message.length() << NL;
    std::cout << "capacity of message: " << message.capacity() << NL;
    util::separator();

    message.shrink_to_fit();

    std::cout << "after shrink_to_fit functino calling: " << NL;
    std::cout << "size of message    : " << message.size() << NL;
    std::cout << "length of message  : " << message.length() << NL;
    std::cout << "capacity of message: " << message.capacity() << NL;
    util::separator();


    std::cout << "\n #(21:33:03): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
