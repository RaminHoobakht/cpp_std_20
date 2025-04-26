/* Subject:   */

#include "main.hpp"


int main() {

    [[maybe_unused]] int a{9};
    [[maybe_unused]] double b{5.5};

    out << "size: " << sizeof(decltype((a > b) ? a : b)) << NL;

    [[maybe_unused]] decltype((a > b) ? a : b) c{67.0};
    out << "c: " << c << NL;

    out << "\n #(03:47:20): The End ..." << eln;
    return EXIT_SUCCESS;
}
