/* convert from number to string */

#include "../header/main.hpp"
#include <iostream>
#include <string>


int main() {

    const double double_var{123.36985};
    const float float_var{25.369F};
    const int int_var{1320};

    const std::string double_str{std::to_string(double_var)};
    const std::string float_str{std::to_string(float_var)};
    const std::string int_str{std::to_string(int_var)};

    LINEFEED;

    std::cout << "double_str size: " << double_str.size() << NL;
    std::cout << "double_var     : " << double_var << NL;
    std::cout << "double_str     : " << double_str << NL;
    util::separator();

    std::cout << "float_str size : " << float_str.size() << NL;
    std::cout << "float_var      : " << float_var << NL;
    std::cout << "float_str      : " << float_str << NL;
    util::separator();

    std::cout << "int_str size   : " << int_str.size() << NL;
    std::cout << "int_var        : " << int_var << NL;
    std::cout << "int_str        : " << int_str << NL;
    util::separator();

    std::cout << "\n #(18:04:35): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
