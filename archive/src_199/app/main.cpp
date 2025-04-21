/* function template  */

#include "main.hpp"

namespace cpp {

    template<typename T>
    T maximum(T a, T b) noexcept;

    /* -------------------- */

    template<typename T>
    T maximum(T a, T b) noexcept {
        out << "a type id is: " << typeid(a).name() << NL;
        out << "b type id is: " << typeid(b).name() << NL;
        return (a > b) ? a : b;
    }


} // namespace cpp


int main() {

    int int_a{120};
    int int_b{220};

    double dbl_a{120.36};
    double dbl_b{220.25};

    auto result1{cpp::maximum(int_a, int_b)};
    out << "max is: " << result1 << NL;
    SEP;

    auto result2{cpp::maximum(dbl_a, dbl_b)};
    out << "max is: " << result2 << NL;
    SEP;

    /* int_a convert to the double data-type */
    auto result3{cpp::maximum<double>(int_a, dbl_b)};
    out << "max is: " << result3 << NL;
    SEP;

    out << "\n #(23:09:57): The End ..." << eln;
    return EXIT_SUCCESS;
}
