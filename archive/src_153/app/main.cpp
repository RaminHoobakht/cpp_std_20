/* naked reference: auto return type deduction */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

auto &max(int &a, int &b) noexcept;

auto &max(int &a, int &b) noexcept {

    if (a > b) {
        return (a);
    } else {
        return (b);
    }
}


int main() {

    int x{120};
    int y{220};

    int &result1{max(x, y)};
    int result2{max(x, y)};

    out << "value of result1 is: " << result1 << NL;
    out << "value of result2 is: " << result2 << NL;


    std::cout << "\n #(23:36:39): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
