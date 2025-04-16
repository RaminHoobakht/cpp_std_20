/* lambda function: capture all by reference */

#include <cstddef>
#include <iostream>
#include "../header/utillib.hpp"


int main() {

    LF;

    int age{54};

    /* capture all by reference */
    auto func = [&]() {
        /* code */
        out << "value of age is: " << age << NL;
    };

    for (size_t i{util::zero}; i < 10; ++i) {
        func();
        ++age;
    }

    out << "\n #(22:54:21): The End ..." << end;
    return EXIT_SUCCESS;
}
