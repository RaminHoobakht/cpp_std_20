#include "../header/main.hpp"
#include <iostream>


int main() {
    /* code */

    int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << "printing original values: " << NL;
    for (const auto &item: scores) {
        std::cout << item << SP;
    }
    std::cout << NL;

    for (auto &item: scores) {
        item += 10;
    }
    std::cout << NL;

    std::cout << "printing modified values: " << NL;
    for (const auto &item: scores) {
        std::cout << item << SP;
    }
    std::cout << NL;

    std::cout << "\n #(21:15:27): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
