/*  */

#include <iostream>
#include "../header/utillib.hpp"


int main() {

    LF;

    int a{10};
    int b{20};

    auto func1 = [a, b]() {
        /* code */
        out << "(a + b) equals: " << (a + b) << NL;
    };

    func1();

    /* variable a and variable b as default are constant
       and can not changed */
    auto func2 = [a, b]() {
        /* code */
        ++a;
        ++b;
        out << "(a + b) equals: " << (a + b) << NL;
    };


    out << "\n #(22:01:35): The End ..." << end;
    return EXIT_SUCCESS;
}
