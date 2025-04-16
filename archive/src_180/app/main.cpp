/* lambda function capture by reference */

#include <iostream>
#include "../header/utillib.hpp"


int main() {

    LF;

    int c{54};

    auto func = [&c]() {
        /* code */
        out << "value of c is: " << c << NL;
    };

    for (size_t i{util::zero}; i < 10; ++i) {
        func();
        ++c;
    }


    out << "\n #(22:35:38): The End ..." << end;
    return EXIT_SUCCESS;
}
