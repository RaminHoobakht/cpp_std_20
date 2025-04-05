/* return by reference within a function */

#include <iostream>
#include "../header/utillib.hpp"

int &max(int &a, int &b) noexcept;

int main() {

    int x{120};
    int y{220};

    int &max_ref{max(x, y)};
    int result{max(x, y)};
    util::separator();

    std::cout << "value of x is: " << x << NL;
    std::cout << "value of y is: " << y << NL;

    std::cout << "value of max_ref is: " << max_ref << NL;
    std::cout << "value of result is : " << result << NL;
    util::separator();

    /* increments y variable. because it is greater then x */
    ++max_ref;
    std::cout << "value of x is: " << x << NL;
    std::cout << "value of y is: " << y << NL;
    util::separator();

    /* increments y variable. because it is greater then x */
    ++max_ref;
    std::cout << "value of x is: " << x << NL;
    std::cout << "value of y is: " << y << NL;
    util::separator();

    /* result variable is a fix variable because it is copy of the max function output. */
    std::cout << "value of result is: " << result << NL;

    std::cout << "\n #(09:54:00): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

int &max(int &a, int &b) noexcept {

    if (a > b) {
        return a;
    } else {
        return b;
    }
}
