#include "../header/main.hpp"
#include <iostream>


int main() {

    int int_value{650};
    int &ref_int_value{int_value};

    std::cout << "int_value    :" << int_value << NL;
    std::cout << "ref_int_value:" << ref_int_value << NL;

    ref_int_value++;

    std::cout << "int_value    :" << int_value << NL;
    std::cout << "ref_int_value:" << ref_int_value << NL;

    std::cout << "\n #(15:29:46): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
