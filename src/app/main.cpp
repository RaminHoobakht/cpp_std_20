#include <iostream>
#include "../header/main.hpp"


int main() {
    auto array{new int[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};

    /* dynamic arrays can not use std::size() */
    // size_t length{std::size(array)}; /* compile time error */

    /* dynamic arrays can not use range base for.
     * below codes encounter with runtime error. */
    for (auto item: array) {
        std::cout << item << '\x20';
    }

    std::cout << "\n #(04:12:19): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
