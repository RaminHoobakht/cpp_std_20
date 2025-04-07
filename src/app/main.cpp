/*  */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

int &sum(int &a, int &b) noexcept;

int main() {

    int a{120};
    int b{320};

    auto result{sum(a, b)};
    out << "value of result is: " << result << NL;

    std::cout << "\n #(05:42:59): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

/* encounter with error. because return is referenced to thel local variable */
int &sum(int &a, int &b) noexcept {
    int local_resutl{a + b};
    return local_resutl;
}
