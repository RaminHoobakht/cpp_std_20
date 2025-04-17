/*  recursive function */

#include "main.hpp"

int add_number(int x) noexcept;

int main() {

    LF;

    int result{add_number(10)};

    out << "value of result is: " << result << NL;

    out << "\n #(00:00:00): The End ..." << end;
    return EXIT_SUCCESS;
}

int add_number(int x) noexcept {
    if (x != 0) {
        return x + add_number(x - 1);
    }
    return x;
}
