#ifndef ARRAY_SWAPPING_HPP
#define ARRAY_SWAPPING_HPP

#include <iostream>
#include "main.hpp"

namespace array_swap {
    inline void my_swap(int *a, int *b) noexcept;

    inline void display_array(const int (&arr)[9]) noexcept;

    inline void swap_int_array(int (&arr_a)[9], int (&arr_b)[9]) noexcept;


    inline void my_swap(int *a, int *b) noexcept {
        const int temp{*a};
        *a = *b;
        *b = temp;
    }

    inline void display_array(const int (&arr)[9]) noexcept {
        for (size_t i{0LLU}; i < 9LLU; ++i) {
            std::cout << arr[i] << '\x20';
        }
        std::cout << NL;
    }

    inline void swap_int_array(int (&arr_a)[9], int (&arr_b)[9]) noexcept {
        for (size_t len{0LLU}; len < 9LLU; ++len) {
            my_swap(&arr_a[len], &arr_b[len]);
        }
    }
} // namespace array_swap

#endif /* ARRAY_SWAPPING_HPP */
