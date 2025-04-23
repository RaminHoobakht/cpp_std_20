/* function template with overloading  */

#include "main.hpp"


int main() {

    const int int_a{120};
    const int int_b{320};

    const int *pa{&int_a};
    const int *pb{&int_b};

    const char *char_a{"C++"};
    const char *char_b{"Python"};

    const auto result_one{cpp::maximum(int_a, int_b)};
    out << "maximum for int: " << result_one << NL;
    SEP;

    const auto result_two{cpp::maximum(pa, pb)};
    out << "maximum for int *: " << *result_two << NL;
    SEP;

    const auto result_three{cpp::maximum(char_a, char_b)};
    out << "maximum for const char*: " << result_three << NL;
    SEP;


    out << "\n #(21:06:34): The End ..." << eln;
    return EXIT_SUCCESS;
}
