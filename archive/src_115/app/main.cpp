/* passing three dimensional array to a function */

#include <iostream>
#include "../header/utillib.hpp"

void print_array1(__restrict_arr const int arr[][6][3],
                  const size_t size) noexcept(true);

void print_array2(__restrict_arr const int (&arr)[2][6][3]) noexcept(true);

int main() {

    constexpr size_t page{2};
    constexpr size_t row{6};
    constexpr size_t col{3};

    int int_arr[page][row][col]{

            {{11, 21, 31},
             {12, 22, 32},
             {13, 23, 33},
             {14, 24, 34},
             {15, 25, 35},
             {16, 26, 36}},

            {{17, 27, 37},
             {18, 28, 38},
             {19, 29, 39},
             {110, 210, 310},
             {111, 211, 311},
             {112, 212, 312}}};


    print_array2(int_arr);


    std::cout << "\n #(22:27:35): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

/* ----------------- */

void print_array1(__restrict_arr const int arr[][6][3],
                  const size_t size) noexcept(true) {

    for (size_t page{util::zero}; page < size; ++page) {

        for (size_t row{util::zero}; row < 6; ++row) {

            for (size_t col{util::zero}; col < 3; ++col) {

                std::cout << *(*(*(arr + page) + row) + col) << ", ";
            }
            LINEFEED;
        }
        LINEFEED;
    }
    LINEFEED;
}

/* ----------------- */

void print_array2(__restrict_arr const int (&arr)[2][6][3]) noexcept(true) {

    size_t page_size{std::size(arr)};
    size_t row_size{std::size(arr[page_size])};
    size_t col_size{std::size(arr[page_size][row_size])};

    std::cout << "page size: " << page_size << NL;
    std::cout << "row size: " << row_size << NL;
    std::cout << "col size: " << col_size << NL;
    LINEFEED;

    for (const auto &page: arr) {
        for (const auto &row: page) {
            for (const auto &col: row) {
                std::cout << col << ", ";
            }
            LINEFEED;
        }
        LINEFEED;
    }
    LINEFEED;
}
