/*  */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

int &max(int a, int b) noexcept;

int main() {


    std::cout << "\n #(06:35:03): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

/* encounter with error. because it referece to local variable. */
int &max(int a, int b) noexcept {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
