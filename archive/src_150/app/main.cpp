/* constness preservation with deduced references */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr


int main() {

    const double some_other_var{44.33};
    const double &const_ref{some_other_var};
    
    /* because p is bind to the const_ref and const_ref variable is const 
     * so, p is const double */
    auto &p{const_ref};

    // ++p; /* enconuter with compile time error. because const_ref is const. */

    out << "value of some_other_var is: " << some_other_var << NL;
    out << "value of const_ref is     : " << const_ref << NL;
    out << "value of p is             : " << p << NL;
    SEP;

    std::cout << "\n #(14:36:16): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
