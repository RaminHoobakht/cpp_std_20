/* using resize function in string class */

#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string message{"I am a C/C++ Developer ..."};

    std::cout << "before: value of message is: " << message << NL;

    message.resize(120);

    std::cout << "after : value of message is: " << message << NL;

    /* --------------------- */

    util::separator();
    message.clear();
    message = "I am a C/C++ Developer ...";

    std::cout << "before: value of message is: " << message << NL;

    message.resize(7);

    std::cout << "after : value of message is: " << message << NL;

    /* --------------------- */

    util::separator();
    message.clear();
    message = "I am a C/C++ Developer ...";

    std::cout << "before: value of message is: " << message << NL;

    message.resize(120, '\0');

    std::cout << "after : value of message is: " << message << NL;

    /* --------------------- */

    util::separator();
    message.clear();
    message = "I am a C/C++ Developer ...";

    std::cout << "before: value of message is: " << message << NL;

    message.resize(7, '\0');

    std::cout << "after : value of message is: " << message << NL;


    std::cout << "\n #(14:13:22): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
