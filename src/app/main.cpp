#include <iostream>
#include "../header/main.hpp"


int main() {
    /* code */

    int int_value{55};
    int &ref_to_int_value{int_value};
    constexpr int other_to_int_value{120};

    util::separator();
    std::cout << "address of int_value is       : " << &int_value << NL;
    std::cout << "address of ref_to_int_value is: " << &ref_to_int_value << NL;
    std::cout << "value of int_value is         : " << int_value << NL;
    std::cout << "value of ref_to_int_value is  : " << ref_to_int_value << NL;

    ref_to_int_value = other_to_int_value;
    util::separator();
    std::cout << "address of int_value is       : " << &int_value << NL;
    std::cout << "address of ref_to_int_value is: " << &ref_to_int_value << NL;
    std::cout << "value of int_value is         : " << int_value << NL;
    std::cout << "value of ref_to_int_value is  : " << ref_to_int_value << NL;

    std::cout << "\n #(09:35:24): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
