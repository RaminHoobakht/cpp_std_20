/* using functions: stof, stod, stold */

#include "../header/main.hpp"
#include <ios>
#include <iostream>
#include <string>


int main() {

    LINEFEED;
    util::separator();

    const std::string str_number{"34.56789123"};


    float float_var{std::stof(str_number)};
    std::cout << std::fixed;
    std::cout << "float_var: " << float_var << NL;
    std::cout << "size of float_var: " << sizeof(float_var) << NL;
    util::separator();

    double double_var{std::stod(str_number)};
    std::cout << std::fixed;
    std::cout << "double_var: " << double_var << NL;
    std::cout << "size of double_var: " << sizeof(double_var) << NL;
    util::separator();

    long double ldouble_var{std::stold(str_number)};
    std::cout << std::fixed;
    std::cout << "ldouble_var: " << ldouble_var << NL;
    std::cout << "size of ldouble_var: " << sizeof(ldouble_var) << NL;
    util::separator();


    std::cout << "\n #(12:44:56): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
