#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string str1{"Hello"};
    std::string str2{"World"};
    std::string message{str1 + " my " + str2};

    std::cout << "the message is: " << message << NL;

    /* below line enconuter with compile time error.
     * because that is character array not an string data. */
     // std::string second_message{"Hello" + " my " + "World"};

    std::cout << "\n #(07:47:45): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
