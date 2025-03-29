/* passnig two dimensionala array to functino */

#include <iostream>
#include "../header/utillib.hpp"

void print_array(const int arr[][3], const size_t row_size) noexcept(true);

int main() {

    int scores[][3]{
            {10, 20, 30}, {20, 30, 40}, {30, 40, 50},
            {40, 50, 60}, {50, 60, 70},
    };

    print_array(scores, 5);

    std::cout << "\n #(22:11:41): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

/* -----------------  */

void print_array(const int arr[][3], const size_t row_size) noexcept(true) {

    for (size_t row{util::zero}; row < row_size; ++row) {
        for (size_t col{util::zero}; col < 3; ++col) {
            std::cout << *(*(arr + row) + col) << ", ";
        }
        LINEFEED;
    }
}
