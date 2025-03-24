/* using copy function in string class */

#include "../header/main.hpp"
#include <iostream>

#define BUFFER_LENGTH 32

int main() {

    std::string message{"I am a C/C++ Developer ..."};
    const size_t msg_size{message.size()};

    char msg[BUFFER_LENGTH]{};

    /* copy string to char array */
    message.copy(msg, msg_size);
    std::cout << "value of msg is: " << msg << NL;


    /* reset msg */
    for (char &item: msg) {
        item = '\0';
    }

    message.copy(msg, 5, 7);
    std::cout << "value of msg is: " << msg << NL;


    std::cout << "\n #(12:32:55): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
