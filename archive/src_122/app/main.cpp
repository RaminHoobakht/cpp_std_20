/*  */

#include <iostream>
#include "../header/utillib.hpp"

constexpr int get_value(int value) noexcept;

int main() {

    // constexpr int result = get_value(10);
    // std::cout << result << NL;

    std::cout << "result is: " << get_value(5) << NL;

    int a{54};
    std::cout << "result is: " << get_value(a) << NL;

    std::cout << "\n #(02:35:55): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

constexpr int get_value(int value) noexcept {
    /* code */
    return 3 * value;
}
