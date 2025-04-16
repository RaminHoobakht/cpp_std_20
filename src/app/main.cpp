/* lambda function */

#include <cmath>
#include <iostream>
#include "../header/utillib.hpp"


int main() {

    /* assign a lambda function to the my_func variable
       with auto type deduction, and then call it subsequently. */
    auto my_func = []() noexcept(true) {
        /* code */
        LF;
        out << "I am lambda function 1 ..." << NL;
    };

    my_func();

    /* lambda function direct call */
    []() noexcept(true) {
        LF;
        out << "I am lambda function 2 ..." << NL;
    }();

    [](double a, double b) noexcept(true) {
        LF;
        out << "add (a, b) equals: " << (a + b) << NL;
    }(12.36, 36.85);

    std::cout << "\n #(18:00:19): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
