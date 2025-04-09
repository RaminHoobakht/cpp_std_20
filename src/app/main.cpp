/*  */

#include <iostream>
#include <typeinfo>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

auto process_number(int value) noexcept;

int main() {

    int x{120};

    /* encounter with compile time error */
    auto result{process_number(x)};

    std::cout << "\n #(19:00:52): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}


auto process_number(int value) noexcept {

    if (value < 10) {
        return (22);
    } else {
        return (33);
    }
}
