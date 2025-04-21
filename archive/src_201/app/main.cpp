/* passing template prometers by reference  */

#include "main.hpp"

namespace cpp {

    template<typename T>
    T maximum(T &a, T &b) noexcept;

    // template<>
    int maximum(int a, int b) noexcept;

    /* ------------------ */

    template<typename T>
    T maximum(T &a, T &b) noexcept {
        out << "address of a is: " << &a << NL;
        out << "address of b is: " << &b << NL;
        return (a > b) ? a : b;
    }

    // template<>
    int maximum(int a, int b) noexcept {
        out << "func: address of a is: " << &a << NL;
        out << "func: address of b is: " << &b << NL;
        return (a > b) ? a : b;
    }


} // namespace cpp


int main() {

    LF;

    int int_a{120};
    int int_b{320};

    double dbl_a{96.36};
    double dbl_b{85.25};

    /* --------------------------------------- */

    out << "main: addres of int_a is: " << &int_a << NL;
    out << "main: addres of int_b is: " << &int_b << NL;
    SEP;

    out << "main: addres of dbl_a is: " << &dbl_a << NL;
    out << "main: addres of dbl_b is: " << &dbl_b << NL;
    SEP;

    /* --------------------------------------- */

    auto result_one{cpp::maximum(int_a, int_b)};
    out << "maximum is: " << result_one << NL;
    SEP;

    /* address of input parameters are same inside and out side 
       the maximum function */
    auto result_two{cpp::maximum(dbl_a, dbl_b)};
    out << "maximum is: " << result_two << NL;
    SEP;

    /* --------------------------------------- */

    out << "main: addres of int_a is: " << &int_a << NL;
    out << "main: addres of int_b is: " << &int_b << NL;
    SEP;

    out << "main: addres of dbl_a is: " << &dbl_a << NL;
    out << "main: addres of dbl_b is: " << &dbl_b << NL;
    SEP;


    out << "\n #(00:31:24): The End ..." << eln;
    return EXIT_SUCCESS;
}
