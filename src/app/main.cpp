/* pass array in function as parameter */

#include "../header/main.hpp"
#include <cstddef>
#include <iostream>

void print_array(const int __restrict_arr arr[5], size_t arr_size) noexcept;

int main() {

    int int_arr[8]{10, 20, 30, 40, 50, 60, 70, 80};

    /* not only five elements array but also you can pass an array more than
     * five elements */
    print_array(int_arr, 8);


    std::cout << "\n #(21:34:41): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

void print_array(const int __restrict_arr arr[5], size_t arr_size) noexcept {

    for (size_t i{util::zero}; i < arr_size; ++i) {
        std::cout << arr[i] << SP;
    }
    LINEFEED;
}
