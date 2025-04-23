/* Subject:   */

#include "main.hpp"


int main() {

    LF;

    constexpr int a{120};
    constexpr int b{320};

    const char *char_a{"C++"};
    const char *char_b{"Python"};

    const auto result1{cpp::maximum(a, b)};
    out << "maximum: " << result1 << NL;

    const auto result2{cpp::maximum(char_a, char_b)};
    out << "maximum: " << result2 << NL;

    out << "\n #(00:00:00): The End ..." << eln;
    return EXIT_SUCCESS;
}
