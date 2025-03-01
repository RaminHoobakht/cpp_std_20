#include "../header/main.hpp"
#include <iostream>

int main() {

    const std::string str1{"Hello"};
    const std::string str2{"World!"};
    char space{'\x20'};                 /* Ok */
    // const char space{'\x20'};        /* Ok */
    // const char *space{" "};          /* Ok */
    // const char *const space{" "};    /* Ok */
    const std::string concat{str1 + space + str2};

    std::cout << "concatenate result is: " << concat << NL;


    std::cout << "\n #(21:57:45): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
