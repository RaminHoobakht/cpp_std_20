#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <concepts>


/* declaration */
namespace cpp {


    template<typename T>
        requires std::integral<T>
    T add(T a, T b) noexcept;

    /* ----------------- */

    template<typename T>
        requires std::integral<T>
    T add(T a, T b) noexcept {
        return a + b;
    }


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
