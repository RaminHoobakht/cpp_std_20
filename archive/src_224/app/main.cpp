/* Subject: using concepts for more than one constrains  */

#include "main.hpp"


int main() {

    LF;

    constexpr int a{120};
    constexpr int b{320};

    const auto result_one{cpp::add_one(a, b)};
    out << "1 - value of result one is: " << result_one << NL;
    SEP;

    const auto result_two{cpp::add_two(a, b)};
    out << "2 - value of result two is: " << result_two << NL;
    SEP;

    const auto result_three{cpp::add_three(a, b)};
    out << "3 - value of result three is: " << result_three << NL;
    SEP;

    const auto result_four{cpp::add_four(a, b)};
    out << "4 - value of result four is: " << result_four << NL;
    SEP;

    const auto result_five{cpp::add_five(a, b)};
    out << "5 - value of result five is: " << result_five << NL;
    SEP;

    const auto result_six{cpp::add_six(a, b)};
    out << "6 - value of result six is: " << result_six << NL;
    SEP;


    out << "\n #(16:26:40): The End ..." << eln;
    return EXIT_SUCCESS;
}
