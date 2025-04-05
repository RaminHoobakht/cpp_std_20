/* returning by pointer */

#include <iostream>
#include "../header/utillib.hpp"

int *max_return_pointer(int *a, int *b) noexcept;

int main() {

    int x{120};
    int y{220};

    int *result{max_return_pointer(&x, &y)};
    std::cout << "value of result is: " << *result << NL;
    util::separator();

    ++(*result);
    std::cout << "after increment: value of result is: " << *result << NL;
    util::separator();

    std::cout << "\n #(12:00:28): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

int *max_return_pointer(int *a, int *b) noexcept {
    if (*a > *b) {
        return a;
    } else {
        return b;
    }
}
