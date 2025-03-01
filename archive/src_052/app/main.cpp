#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string str1{};
    str1.append(10, 'O');
    std::cout << " str1: " << str1 << NL;

    std::string str2{"1234567890"};
    std::string str3{};
    str3.append(str2, 3, 5);  /* 45678 */
    std::cout << " str3: " << str3 << NL;

    std::cout << "\n #(19:33:01): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
