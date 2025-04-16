/* lambda function capture by value */

#include <iostream>
#include "../header/utillib.hpp"


int main() {

    int c{5};

    auto func = [c]() {
        /* code */
        out << "value of c is: " << c << NL;
    };

    /* variable c is changed in block of the for
       but it not effect to func lambda function.
       because it is only a copy of c in lambda function,
       so after increasing it in each of loop value of c in
       lambda function stay constantly. */
    for (size_t i{util::zero}; i < 10; ++i) {
        func();
        ++c;
    }

    out << "\n #(22:15:41): The End ..." << end;
    return EXIT_SUCCESS;
}
