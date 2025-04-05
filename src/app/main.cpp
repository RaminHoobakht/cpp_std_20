/* returning array within function */

#include <iostream>
#include "../header/utillib.hpp"

const double *find_maximum(const double scores[], size_t size) noexcept;

int main() {

    double numbers[]{10.36,   25.23,        66.22,         85.24, 14.89,
                     96.23,   102.325,      82.25,         69.36, 998.336,
                     874.259, 1024.9558899, 1023.369852147};

    size_t array_size{std::size(numbers)};
    const double *result{find_maximum(numbers, array_size)};

    std::cout << "value of result is: " << *result << NL;

    std::cout << "\n #(14:46:02): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

const double *find_maximum(const double scores[], size_t size) noexcept {

    double max{0.0};
    size_t index{util::zero};

    for (size_t i{util::zero}; i < size; ++i) {
        if (scores[i] > max) {
            max = scores[i];
            index = i;
        }
    }

    return &scores[index];
}
