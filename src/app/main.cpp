/*  */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

auto find_max_number(auto x, auto y) noexcept;

auto find_max_number(auto x, auto y) noexcept {
    if (x > y) {
        return (x);
    } else {
        return (y);
    }
}


int main() {

    double a{420.0};
    double b{220};

    auto result{find_max_number(a, b)};
    out << "value of result is: " << result << NL;

    std::cout << "\n #(12:50:09): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
