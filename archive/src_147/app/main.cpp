/* naked auto deduction */

#include <iostream>
#include <typeinfo>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr


int main() {

    double some_var{55.5};
    auto x{some_var};

    out << "size of some_var is: " << sizeof(some_var) << NL;
    out << "size of x is       : " << sizeof(x) << NL;
    SEP;

    out << "address of some_var is: " << &some_var << NL;
    out << "address of x is       : " << &x << NL;
    SEP;

    out << "type of some_var is: " << typeid(some_var).name() << NL;
    out << "type of x is       : " << typeid(x).name() << NL;

    std::cout << "\n #(15:59:26): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
