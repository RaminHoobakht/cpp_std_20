#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <concepts>
#include <type_traits>

/* declaration */
namespace cpp {

    template<typename T>
        requires std::integral<T>
    T add_one(T a, T b) noexcept;

    template<typename T>
        requires std::is_integral<T>::value
    T add_two(T a, T b) noexcept;

    template<typename T>
        requires std::is_integral_v<T>
    T add_three(T a, T b) noexcept;

    template<std::integral T>
    T add_four(T a, T b) noexcept;

    std::integral auto add_five(std::integral auto a,
                                std::integral auto b) noexcept;

    template<typename T>
    T add_six(T a, T b) noexcept
        requires std::integral<T>;

    /* -------------------------------------- */

    template<typename T>
        requires std::integral<T>
    T add_one(T a, T b) noexcept {
        return a + b;
    }

    template<typename T>
        requires std::is_integral<T>::value
    T add_two(T a, T b) noexcept {
        return a + b;
    }

    template<typename T>
        requires std::is_integral_v<T>
    T add_three(T a, T b) noexcept {
        return a + b;
    }

    template<std::integral T>
    T add_four(T a, T b) noexcept {
        return a + b;
    }

    std::integral auto add_five(std::integral auto a,
                                std::integral auto b) noexcept {
        return a + b;
    }

    template<typename T>
    T add_six(T a, T b) noexcept
        requires std::integral<T>
    {
        return a + b;
    }

} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
