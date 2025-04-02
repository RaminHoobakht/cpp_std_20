/*  */

#include <iostream>
#include "../header/utillib.hpp"

int sum(int a, int b) noexcept;

int main() {

    LINEFEED;

    const int x{120};
    const int y{220};

    const int main_result{sum(x, y)};

    std::cout << "reference of the main_result is: " << &main_result << NL;
    std::cout << "value of the main_result is: " << main_result << NL;

    std::cout << "\n #(10:55:51): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

int sum(int a, int b) noexcept {
    int local_result{a + b};
    std::cout << "reference of the local_result is: " << &local_result << NL;
    std::cout << "value of the local_result is: " << local_result << NL;
    util::separator();
    return local_result;
}
