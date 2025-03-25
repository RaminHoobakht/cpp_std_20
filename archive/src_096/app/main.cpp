/*  */

#include "../header/main.hpp"
#include <iostream>


int main() {

    LINEFEED;

    std::string message{"Hello World"};
    std::string message_copy{message};

    std::cout << "message     : " << message << NL;
    std::cout << "message_copy: " << message_copy << NL;
    util::separator();

    char *p1{message.data()};
    char *p2{message_copy.data()};

    std::cout << "(void *)p1  : " << reinterpret_cast<void *>(p1) << NL;
    std::cout << "(void *)p2  : " << reinterpret_cast<void *>(p2) << NL;
    util::separator();

    std::cout << "*p1 : " << *p1 << NL;
    std::cout << "*p2 : " << *p2 << NL;
    util::separator();

    std::cout << "p1 : " << p1 << NL;
    std::cout << "p2 : " << p2 << NL;
    util::separator();

    std::cout << "\n #(15:29:48): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
