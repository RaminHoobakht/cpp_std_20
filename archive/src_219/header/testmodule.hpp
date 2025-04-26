#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <type_traits>
#include "utillib.hpp"

/* declaration */
namespace cpp {

    template<typename T>
    void print_number(T a) noexcept;

    template<typename T>
    void print_number(T a) noexcept {
        static_assert(std::is_integral_v<T>,
                      "it must using only with integral data type ...");
        out << "value of input number is: " << a << NL;
    }

} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
