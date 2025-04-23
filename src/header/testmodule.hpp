#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <cstring>

/* declaration */
namespace cpp {

    template<typename T>
    T maximum(T a, T b) noexcept;

    template<typename T>
    T *maximum(T *a, T *b) noexcept;

    template<>
    const char *maximum(const char *a, const char *b) noexcept;

    /* ----------------------- */

    template<typename T>
    T maximum(T a, T b) noexcept {
        return (a > b) ? a : b;
    }

    template<typename T>
    T *maximum(T *a, T *b) noexcept {
        return (a > b) ? a : b;
    }


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
