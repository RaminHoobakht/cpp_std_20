#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <concepts>
#include <type_traits>

/* declaration */
namespace cpp {

    template<typename T>
    concept tiny_type = requires(T a) { requires sizeof(T) > 4; };

    template<typename T>
    concept my_concept = requires(T a, T b) {
        { a + b } noexcept -> std::convertible_to<int>;
    };

    /* ************************ */

    template<typename T>
        requires tiny_type<T>
    T add_one(T a, T b) noexcept;


    my_concept auto add_two(my_concept auto a, my_concept auto b) noexcept;

    /* ------------------------ */

    template<typename T>
        requires tiny_type<T>
    T add_one(T a, T b) noexcept {
        return a + b;
    }

    my_concept auto add_two(my_concept auto a, my_concept auto b) noexcept {
        return a + b;
    }

} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
