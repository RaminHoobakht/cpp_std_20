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

    std::shared_ptr<int[]> int_array_one{new int[]{1, 2, 3, 4, 5, 6, 7, 8, 9}};

    for (int i{0}; i < 9; ++i) {
        pout << int_array_one[i] << NL;
    }
    SEP;

    std::shared_ptr<int[]> int_array_two{std::make_shared<int[]>(9)};

    for (int i{0}; i < 9; ++i) {
        int_array_two[i] = i + 10;
    }

    for (int i{0}; i < 9; ++i) {
        pout << int_array_two[i] << NL;
    }
    SEP;


    pout << "\n #(00:34:18): The End ..." << eln;
    return EXIT_SUCCESS;
}
