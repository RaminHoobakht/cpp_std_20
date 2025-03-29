/* sized array passed by reference */

#include "src/header/utillib.hpp"
#include <cstddef>
#include <iostream>

void print_array_one(int (&arr)[10]) noexcept(true);
void print_array_two(int (&arr)[], size_t size) noexcept(true);
void print_array_three(int(&arr), size_t size) noexcept(true);


int main() {

    //    int numbers[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int numbers[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    print_array_one(numbers);
    print_array_two(numbers, 10);
    print_array_three(*numbers, 10);


    std::cout << "\n #(21:47:05): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

void print_array_one(int (&arr)[10]) noexcept(true) {

    size_t size{std::size(arr)};

    for (size_t i{util::zero}; i < size; ++i) {
        std::cout << arr[i] << SP;
    }
    LINEFEED;
}

void print_array_two(int (&arr)[], size_t size) noexcept(true) {

    //    size_t size{std::size(arr)};

    for (size_t i{util::zero}; i < size; ++i) {
        std::cout << arr[i] << SP;
    }
    LINEFEED;
}

void print_array_three(int(&arr), size_t size) noexcept(true) {

    //    size_t size{std::size(arr)};

    for (size_t i{util::zero}; i < size; ++i) {
        std::cout << arr++ << SP;
    }
    LINEFEED;
}
