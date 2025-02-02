#include "../header/main.hpp"
#include <iostream>


int main() {

    int int_value{45};
    double double_value{33.65};

    int &reference_to_int_value_1{int_value};
    int &reference_to_int_value_2 = int_value;
    double reference_to_double_value{double_value};

    /* ------------------------- */

    std::cout << "int_value: " << int_value << NL;
    std::cout << "double_value: " << double_value << NL;
    std::cout << "ref_to_int_value_1: " << reference_to_int_value_1 << NL;
    std::cout << "ref_to_int_value_2: " << reference_to_int_value_2 << NL;
    std::cout << "ref_to_double_value: " << reference_to_double_value << NL;
    util::separator();

    std::cout << "&int_value   : " << &int_value << NL;
    std::cout << "&double_value: " << &double_value << NL;
    std::cout << "&ref_to_int_value_1 : " << &reference_to_int_value_1 << NL;
    std::cout << "&ref_to_int_value_2 : " << &reference_to_int_value_2 << NL;
    std::cout << "&ref_to_double_value: " << &reference_to_double_value << NL;

    util::separator();
    std::cout << "sizeof(int) : " << sizeof(int) << NL;
    std::cout << "sizeof(int&): " << sizeof(int &) << NL;
    std::cout << "sizeof(reference_to_int_value_1): "
              << sizeof(reference_to_int_value_1) << NL;


    std::cout << "\n #(04:43:11): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
