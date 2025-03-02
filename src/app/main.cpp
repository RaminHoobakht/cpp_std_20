#include <iostream>
#include "../header/main.hpp"


int main() {
    std::string str1{"Hello"};

    str1 += ',';
    std::cout << "str: " << str1 << NL;
    util::separator();

    str1.clear();
    str1 = "Hello";
    str1 += ',' + ' ';
    std::cout << "str: " << str1 << NL;
    util::separator();

    str1.clear();
    str1 = "Hello";
    (str1 += ',') += ' ';
    std::cout << "str: " << str1 << NL;
    util::separator();

    const std::string str2{"Hello"};
    const std::string str3{"I am here to see you."};
    const std::string str4{str2 + ',' + ' ' + str3};
    std::cout << "str4: " << str4 << NL;

    std::cout << "\n #(14:32:48): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
