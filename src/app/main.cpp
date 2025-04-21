/* template type deduction and explicit arguments */

#include "main.hpp"

namespace cpp {

    template<typename T>
    T maximum(T a, T b) noexcept;

    /* ---------------------------- */

    template<typename T>
    T maximum(T a, T b) noexcept {
        out << "a type id is: " << typeid(a).name() << NL;
        out << "b type id is: " << typeid(b).name() << NL;
        return (a > b) ? a : b;
    }


} // namespace cpp


int main() {

    int int_a{120};
    int int_b{320};

    double dbl_a{120.322};
    double dbl_b{320.122};


    auto result1{cpp::maximum(int_a, int_b)};
    out << "maximum number is: " << result1 << NL;
    SEP;

    auto result2{cpp::maximum(dbl_a, dbl_b)};
    out << "maximum number is: " << result2 << NL;
    SEP;

    /* int_a variable convert to the double data-type implicitly. */
    auto result3{cpp::maximum<double>(int_a, dbl_b)};
    out << "maximum number is: " << result3 << NL;
    SEP;

    /* dbl_b variable convert to the int data-type implicitly.
       but not in this project, duo to compile flags done for
       implicit conversion restriction. */
    auto result4{cpp::maximum<int>(int_a, dbl_b)};
    out << "maximum number is: " << result4 << NL;
    SEP;


    out << "\n #(23:38:27): The End ..." << eln;
    return EXIT_SUCCESS;
}
