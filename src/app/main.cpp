#include "../header/main.hpp"
#include <iostream>


int main() {
    /* code */

    double double_value{12.34};
    double &ref_double_value{double_value};
    double *p_double_value{&double_value};

    util::separator_msg("reading original values");
    std::cout << "double_value    : " << double_value << NL;
    std::cout << "ref_double_value: " << ref_double_value << NL;
    std::cout << "p_double_value  : " << p_double_value << NL;
    std::cout << "*p_double_value : " << *p_double_value << NL;

    *p_double_value = 15.44;

    util::separator_msg("after p_double_value changed");
    std::cout << "double_value    : " << double_value << NL;
    std::cout << "ref_double_value: " << ref_double_value << NL;
    std::cout << "p_double_value  : " << p_double_value << NL;
    std::cout << "*p_double_value : " << *p_double_value << NL;

    ref_double_value = 18.44;

    util::separator_msg("after ref_double_value changed");
    std::cout << "double_value    : " << double_value << NL;
    std::cout << "ref_double_value: " << ref_double_value << NL;
    std::cout << "p_double_value  : " << p_double_value << NL;
    std::cout << "*p_double_value : " << *p_double_value << NL;


    std::cout << "\n #(13:01:53): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
