#include "testmodule.hpp"

/* definition */
namespace cpp {

    void func_floating_point(double d) noexcept {
        out << "input variable is floating point data type ..." << NL;
        out << "value of input variable is: " << d << NL;
    }

    void func_integral(int i) noexcept {
        out << "input variable is integral data type ..." << NL;
        out << "value of input variable is: " << i << NL;
    }


} // namespace cpp
