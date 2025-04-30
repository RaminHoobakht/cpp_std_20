#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <concepts>
#include <type_traits>

/* declaration */
namespace cpp {

    template<typename T>
    concept my_integral = std::is_integral<T>::value;

    template<typename T>
    concept multipuliable = requires(T a, T b) { a *b; };

    template<typename T>
    concept incrementable = requires(T a) {
        a += 1;
        ++a;
        a++;
    };

    /* ------------------------------ */

    template<typename T>
        requires my_integral<T>
    T add_one(T a, T b) noexcept;

    template<typename T>
        requires multipuliable<T>
    T add_two(T a, T b) noexcept;

    template<typename T>
        requires incrementable<T>
    T add_three(T a, T b) noexcept;


    /* ------------------------------ */

    template<typename T>
        requires my_integral<T>
    T add_one(T a, T b) noexcept {
        return (a + b) * 2;
    }

    template<typename T>
        requires multipuliable<T>
    T add_two(T a, T b) noexcept {
        return a * b;
    }

    template<typename T>
        requires incrementable<T>
    T add_three(T a, T b) noexcept {
        return a + b;
    }


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
