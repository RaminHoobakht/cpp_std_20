/* proper referenced deduction */

#include <iostream>
#include <typeinfo>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

int main() {

    LF;

    double some_var{55.5566};
    double some_var_ref{some_var};
    auto &y{some_var_ref};

    ++y;

    out << "size of some_var    : " << sizeof(some_var) << NL;
    out << "sizeof some_var_ref : " << sizeof(some_var_ref) << NL;
    out << "sizeof y            : " << sizeof(y) << NL;
    SEP;

    out << "address of some_var    : " << &some_var << NL;
    out << "address of some_var_ref: " << &some_var_ref << NL;
    out << "address of y           : " << &y << NL;
    SEP;

    out << "type of some_var    : " << typeid(some_var).name() << NL;
    out << "type of some_var_ref: " << typeid(some_var_ref).name() << NL;
    out << "type of y           : " << typeid(y).name() << NL;
    SEP;

    out << "value of some_var    : " << some_var << NL;
    out << "value of some_var_ref: " << some_var_ref << NL;
    out << "value of y           : " << y << NL;

    std::cout << "\n #(13:46:21): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
