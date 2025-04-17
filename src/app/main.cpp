/* recursive function  */

#include "main.hpp"

int add_number(int x) noexcept;

int main() {

    int result{add_number(12)};
    out << "value of number is: " << result << NL;

    out << "\n #(11:57:21): The End ..." << end;
    return EXIT_SUCCESS;
}

int add_number(int x) noexcept {

    if (x != 0) {
        return x + add_number(x - 1);
    }

    return x;
}
