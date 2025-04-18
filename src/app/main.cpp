/* template type parameters pass by reference  */

#include "main.hpp"

namespace cpp {

    template<typename T>
    T &maximum(T &a, T &b) noexcept;

    template<typename T>
    const T &maximum(const T &a, const T &b) noexcept;


    /* -------------------- */

    template<typename T>
    T &maximum(T &a, T &b) noexcept {
        out << "T &maximum(T &a, T &b) was invoked: " << NL;
        out << "address of a is: " << &a << NL;
        out << "address of b is: " << &b << NL;
        return (a > b) ? a : b;
    }

    template<typename T>
    const T &maximum(const T &a, const T &b) noexcept {
        out << "const T &maximum(const T &a, const T &b) was invoked: " << NL;
        out << "address of a is: " << &a << NL;
        out << "address of b is: " << &b << NL;
        return (a > b) ? a : b;
    }


} // namespace cpp


int main() {

    int x{120};
    int y{220};

    int &ref_x{x};
    int &ref_y{y};

    const int &cref_x{ref_x};
    const int &cref_y{ref_y};

    out << "main: address of x is: " << &x << NL;
    out << "main: address of y is: " << &y << NL;
    SEP;

    auto result1{cpp::maximum(x, y)};
    out << "value of result1 is: " << result1 << NL;
    SEP;

    auto result2{cpp::maximum(ref_x, ref_y)};
    out << "value of result2 is: " << result2 << NL;
    SEP;


    auto result3{cpp::maximum(cref_x, cref_y)};
    out << "value of result3 is: " << result3 << NL;
    SEP;


    out << "\n #(12:11:12): The End ..." << eln;
    return EXIT_SUCCESS;
}
