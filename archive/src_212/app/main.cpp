/* Subject:   */

#include "main.hpp"


int main() {

    int a{5};
    double b{35.36};

    const auto result{cpp::maximum(a, b)};
    out << "value of result is: " << result << NL;

    out << "\n #(04:27:42): The End ..." << eln;
    return EXIT_SUCCESS;
}

