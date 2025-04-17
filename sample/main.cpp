/* using resize function in string class */

#include "main.hpp"


int main() {

    std::string message{"I am a C/C++ Developer ..."};

    std::cout << "before resize: " << NL;
    std::cout << "value of message is  : " << message << NL;
    std::cout << "size of message is   : " << message.size() << NL;
    std::cout << "length of message is : " << message.length() << NL;
    std::cout << "capacity of message is: " << message.capacity() << NL;

    util::separator();
    // message.resize(7);			/* overload one. */
    message.resize(7, '\0'); /* overload two. */

    std::cout << "after resize: " << NL;
    std::cout << "value of message is  : " << message << NL;
    std::cout << "size of message is   : " << message.size() << NL;
    std::cout << "length of message is : " << message.length() << NL;
    std::cout << "capacity of message is: " << message.capacity() << NL;


    std::cout << "\n #(14:13:22): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
