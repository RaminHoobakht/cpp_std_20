/* functio template:  */

#include "main.hpp"

namespace cpp {

    template<typename T>
    T maximum(T a, T b) noexcept;

    /* ----------------------- */

    template<typename T>
    T maximum(T a, T b) noexcept {
        return (a > b) ? a : b;
    }


} // namespace cpp


int main() {

    int a{120};
    int b{320};

    double dbl_a{20.36};
    double dbl_b{12.58};

    auto result1{cpp::maximum(a, b)};
    out << "max is: " << result1 << NL;
    SEP;

    auto result2{cpp::maximum(dbl_a, dbl_b)};
    out << "max is: " << result2 << NL;
    SEP;

    /* it works even though */
    auto result3{cpp::maximum<double>(a, dbl_b)};
    out << "max is: " << result3 << NL;
    SEP;

    out << "\n #(21:32:17): The End ..." << eln;
    return EXIT_SUCCESS;
}
