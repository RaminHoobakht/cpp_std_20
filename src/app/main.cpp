/* function template with multiple parameters  */

#include "main.hpp"


int main() {

    const int a{25};
    const double b{96.52};

    /* returnType: double, a: double, b: double */
    const auto result1{cpp::maximum<double, double, double>(a, b)};
    out << "maximum is: " << result1 << NL;
    SEP;

    /* returnType: double, a: double, b: double */
    const auto result2{cpp::maximum<double, double>(a, b)};
    out << "maximum is: " << result2 << NL;
    SEP;

    /* returnType: double, a: int, b: double */
    const auto result3{cpp::maximum<double>(a, b)};
    out << "maximum is: " << result3 << NL;
    SEP;


    out << "\n #(01:49:12): The End ..." << eln;
    return EXIT_SUCCESS;
}
