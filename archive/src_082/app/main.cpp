/* using replace function in string class */

#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string str1{"I like to be a Python Developer ..."};
    std::string str2{"I am a C/C++ Developer ..."};

    std::cout << "str1 before replace: " << str1 << NL;

    str1.replace(15, 20, str2, 7, 11);

    std::cout << "str1 after  replace: " << str1 << NL;

    std::cout << "\n #(02:22:34): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
