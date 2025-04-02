/*  */

#include <iostream>
#include "../header/utillib.hpp"


int &sum(int &a, int &b) noexcept;

int main() {

    LINEFEED;

    int x{120};
    int y{220};

    int main_result{sum(x, y)};
    std::cout << "result is: " << main_result << NL;
    std::cout << "value of x is: " << x << NL;
    std::cout << "value of y is: " << y << NL;
    util::separator();

    main_result++;
    std::cout << "result is: " << main_result << NL;
    std::cout << "value of x is: " << x << NL;
    std::cout << "value of y is: " << y << NL;


    std::cout << "\n #(11:24:35): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

int &sum(int &a, int &b) noexcept {
    a += b;
    return a;
}
