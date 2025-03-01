#include "../header/main.hpp"
#include <iostream>


int main() {

    const std::string str1{"Hello"};
    const std::string str2{"World"};
    std::string str3{};
    str3.append(str1);
    str3.append(" ");
    str3.append(str2);

    std::cout << " str3: " << str3 << NL;


    std::cout << "\n #(18:11:13): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
