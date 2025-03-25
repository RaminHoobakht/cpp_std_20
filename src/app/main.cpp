/* using functions: stoul, stoull */

#include "../header/main.hpp"
#include <iostream>
#include <string>


int main() {

    LINEFEED;
    util::separator();

    const std::string str_number{"34.567"};

    unsigned long int uli_var{std::stoul(str_number)};
    std::cout << "uli_var: " << uli_var << NL;
    std::cout << "size of uli_var: " << sizeof(uli_var) << NL;
    util::separator();

    unsigned long long int ulli_var{std::stoul(str_number)};
    std::cout << "ulli_var: " << ulli_var << NL;
    std::cout << "size of ulli_var: " << sizeof(ulli_var) << NL;
    util::separator();


    std::cout << "\n #(12:33:17): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
