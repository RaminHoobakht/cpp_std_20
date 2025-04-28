#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <concepts>
#include <type_traits>

/* declaration */
namespace cpp {

    /* syntax one */
    template<typename T>
        requires std::integral<T>
    T add_one(T a, T b) noexcept;

    /* syntax two */
    template<typename T>
        requires std::is_integral_v<T>
    T add_two(T a, T b) noexcept;

    /* syntax three */
    template<typename T>
    T add_three(T a, T b) noexcept
        requires std::is_integral_v<T>;

    /* syntax four */
    template<typename T>
    T add_four(T a, T b) noexcept
        requires std::integral<T>;

    /* syntax five */
    template<std::integral T>
    T add_five(T a, T b) noexcept;

    /* syntax six */
    std::integral auto add_six(std::integral auto a,
                               std::integral auto b) noexcept;

    /* -------------------------------- */

    /* syntax one */
    template<typename T>
        requires std::integral<T>
    T add_one(T a, T b) noexcept {
        return a + b;
    }

    /* syntax two */
    template<typename T>
        requires std::is_integral_v<T>
    T add_two(T a, T b) noexcept {
        return a + b;
    }

    /* syntax three */
    template<typename T>
    T add_three(T a, T b) noexcept
        requires std::is_integral_v<T>
    {
        return a + b;
    }

    /* syntax four */
    template<typename T>
    T add_four(T a, T b) noexcept
        requires std::integral<T>
    {
        return a + b;
    }

    /* syntax five */
    template<std::integral T>
    T add_five(T a, T b) noexcept {
        return a + b;
    }

    /* syntax six */
    std::integral auto add_six(std::integral auto a,
                               std::integral auto b) noexcept {
        return a + b;
    }

} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
