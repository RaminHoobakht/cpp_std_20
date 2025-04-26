#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <type_traits>
#include "utillib.hpp"

/* declaration */
namespace cpp {

    template<typename T>
    void func(T t) noexcept;

    void func_floating_point(double d) noexcept;
    void func_integral(int i) noexcept;


    template<typename T>
    void func(T t) noexcept {
        if constexpr (std::is_integral_v<T>) {
            func_integral(t);
        } else if constexpr (std::is_floating_point_v<T>) {
            func_floating_point(t);
        } else {
            static_assert(std::is_integral_v<T> || std::is_floating_point_v<T>,
                          "Parameter data type must be integral or floating "
                          "point ...");
        }
    }


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
