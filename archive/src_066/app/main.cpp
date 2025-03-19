#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string message{"I am a C/C++ Developer ..."};

    std::cout << "message size is  : " << message.size() << NL;
    std::cout << "message length is: " << message.length() << NL;
    std::cout << "message max size : " << message.max_size() << NL;
    std::cout << "message capacity : " << message.capacity() << NL;

    util::separator();

    /*-------------------------------- */

    message = "I am trying to be a C and C++ developre in the future ...";

    std::cout << "message size is  : " << message.size() << NL;
    std::cout << "message length is: " << message.length() << NL;
    std::cout << "message max size : " << message.max_size() << NL;
    std::cout << "message capacity : " << message.capacity() << NL;

    util::separator();

    /*-------------------------------- */

    message.reserve(120); /* has side effect for capacity function */

    std::cout << "message size is  : " << message.size() << NL;
    std::cout << "message length is: " << message.length() << NL;
    std::cout << "message max size : " << message.max_size() << NL;
    std::cout << "message capacity : " << message.capacity() << NL;

    util::separator();

    /*-------------------------------- */


    std::cout << "\n #(13:56:34): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
