/*
 *  Subject: Using Smart Pointer:
 *              - using shared smart pointer with arrays
 *
 * */

#include "main.hpp"

using person = entity::person;


int main() {

    /* {"Ramin", "Hoobakht", 1001, 64}; */

    LF;

    std::shared_ptr<int[]> int_array{new int[]{1, 2, 3, 4, 5, 6, 7, 8, 9}};

    for (int i{0}; i < 9; ++i) {
        pout << int_array[i] << NL;
    }

    std::shared_ptr<int[]> int_array2{std::make_shared<int[]>(10)};

    for (int i{0}; i < 10; i++) {
        int_array2[i] = i;
    }

    for (int i{0}; i < 10; i++) {
        pout << int_array2[i] << NL;
    }

    pout << "\n #(20:33:08): The End ..." << eln;
    return EXIT_SUCCESS;
}
