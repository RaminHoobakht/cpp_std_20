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
        requires(std::integral<T>)
    T add_two(T a, T b) noexcept;

    template<typename T>
        requires(std::integral<T> || std::floating_point<T>)
    T add_three(T a, T b) noexcept;

    template<typename T>
    T add_four(T a, T b) noexcept
        requires(std::integral<T> || std::floating_point<T>);

    template<typename T>
    T add_five(T a, T b) noexcept
        requires(std::is_integral_v<T> || std::is_floating_point_v<T>);

    auto add_six(std::integral auto a, std::integral auto b) noexcept;


    /* ----------------------------- */


    template<typename T>
        requires std::integral<T>
    T add_one(T a, T b) noexcept {
        return a + b;
    }

    template<typename T>
        requires(std::integral<T>)
    T add_two(T a, T b) noexcept {
        return a + b;
    }

    template<typename T>
        requires(std::integral<T> || std::floating_point<T>)
    T add_three(T a, T b) noexcept {
        return a + b;
    }


    template<typename T>
    T add_four(T a, T b) noexcept
        requires(std::integral<T> || std::floating_point<T>)
    {
        return a + b;
    }

    template<typename T>
    T add_five(T a, T b) noexcept
        requires(std::is_integral_v<T> || std::is_floating_point_v<T>)
    {
        return a + b;
    }

    auto add_six(std::integral auto a, std::integral auto b) noexcept {
        return a + b;
    }


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
