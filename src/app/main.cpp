/* using swap function in string class */

#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string str1{"Python is very good computer language ..."};
    std::string str2{"I am a C/C++ Developer ..."};

    LINEFEED;

    std::cout << "before swapping: " << NL;
    std::cout << "value of str1: " << str1 << NL;
    std::cout << "value of str2: " << str2 << NL;
    std::cout << "str1 size    : " << str1.size() << NL;
    std::cout << "str1 capacity: " << str1.capacity() << NL;
    std::cout << "str2 size    : " << str2.size() << NL;
    std::cout << "str2 capacity: " << str2.capacity() << NL;
    util::separator();

    str1.swap(str2);
    LINEFEED;

    std::cout << "before swapping: " << NL;
    std::cout << "value of str1: " << str1 << NL;
    std::cout << "value of str2: " << str2 << NL;
    std::cout << "str1 size    : " << str1.size() << NL;
    std::cout << "str1 capacity: " << str1.capacity() << NL;
    std::cout << "str2 size    : " << str2.size() << NL;
    std::cout << "str2 capacity: " << str2.capacity() << NL;
    util::separator();

    std::cout << "\n #(15:24:21): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
