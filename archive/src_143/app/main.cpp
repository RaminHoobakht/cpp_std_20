/* auto type deduction: naked auto deduction  */

#include <iostream>
#include "../header/utillib.hpp"


int main() {


    double some_var{55.65};
    auto x{some_var};

    std::cout << "size of some_var is: " << sizeof(some_var) << NL;
    std::cout << "address of x is: " << &some_var << NL;
    util::separator();

    std::cout << "size of x is: " << sizeof(x) << NL;
    std::cout << "address of x is: " << &x << NL;
    util::separator();


    std::cout << "\n #(17:19:17): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
