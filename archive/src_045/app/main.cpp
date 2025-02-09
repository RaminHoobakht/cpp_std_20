#include "../header/main.hpp"
#include <cstring>
#include <iostream>

int main() {

    char str_dest[64]{"Hello, "};
    constexpr char str_src[64]{"World! "};
    std::strcat(str_dest, str_src);
    std::strcat(str_dest, " Good Bye World!");

    std::cout << "result is: " << str_dest << NL;

    std::cout << "\n #(19:16:28): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
