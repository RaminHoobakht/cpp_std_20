/* using stoi, stol, stoll */

#include "../header/main.hpp"
#include <iostream>
#include <string>


int main() {

    LINEFEED;

    const std::string str_number{"-34.567"};

    signed int int_var{std::stoi(str_number)};
    std::cout << "int_var: " << int_var << NL;
    std::cout << "size of int_var: " << sizeof(int_var) << NL;
    util::separator();

    signed long int long_var{std::stol(str_number)};
    std::cout << "long_var: " << long_var << NL;
    std::cout << "size of long_var: " << sizeof(long_var) << NL;
    util::separator();

    signed long long int long_long_var{std::stoll(str_number)};
    std::cout << "long_long_var: " << long_long_var << NL;
    std::cout << "size of long_long_var: " << sizeof(long_long_var) << NL;
    util::separator();

    std::cout << "\n #(02:08:20): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
