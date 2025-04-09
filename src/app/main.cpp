/* non reference naked auto deduction: constness doesn't matter */

#include <iostream>
#include <typeinfo>
#include "../header/utillib.hpp"


#define out std::cout
#define log std::clog
#define err std::cerr


int main() {

    const double const_variable{100.963};
    auto x{const_variable};

    out << "type of const_variable is: " << typeid(const_variable).name() << NL;
    out << "type of x is             : " << typeid(x).name() << NL;
    SEP;

    out << "value of const_variable is : " << const_variable << NL;
    out << "value of x is              : " << x << NL;
    SEP;

    ++x;

    out << "after change value of x :" << NL;
    out << "value of const_variable is : " << const_variable << NL;
    out << "value of x is              : " << x << NL;
    SEP;

    std::cout << "\n #(17:14:57): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
