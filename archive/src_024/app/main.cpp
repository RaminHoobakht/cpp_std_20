#include "../header/main.hpp"
#include <iostream>


int main() {

    double double_value{12.34};
    double &ref_double_value{double_value};

    double other_double_value{100.13};

    ref_double_value = other_double_value;

    std::cout << "double_value    : " << double_value << NL;
    std::cout << "ref_double_value: " << ref_double_value << NL;
    std::cout << "ref_double_value: " << ref_double_value << NL;

    ref_double_value = 33.333;

    util::separator();
    std::cout << "double_value    : " << double_value << NL;
    std::cout << "ref_double_value: " << ref_double_value << NL;
    std::cout << "ref_double_value: " << other_double_value << NL;


    std::cout << "\n #(08:21:52): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
