/* recursive function  */

#include "main.hpp"

int add_number(int x) noexcept;

int main() {

    int result{add_number(12)};
    out << "value of number is: " << result << NL;
    SEP;

    out << "(1 + 2 + 3 .... 100) equals: " << add_number(100) << NL;
    SEP;


    out << "\n #(11:57:21): The End ..." << end;
    return EXIT_SUCCESS;
}

int add_number(int x) noexcept {

    if (x != 0) {
        return x + add_number(x - 1);
    }

    return x;
}
