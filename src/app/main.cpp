/* Subject: using concepts  */

#include "main.hpp"


int main() {
 
    constexpr int a{120};
    constexpr int b{520};

    const auto result_one{cpp::add_one(a , b)};
    out << "value of result one is: " << result_one << NL;
    SEP;

    const auto result_two{cpp::add_two(a , b)};
    out << "value of result two is: " << result_two << NL;
    SEP;

    const auto result_three{cpp::add_three(a , b)};
    out << "value of result three is: " << result_three << NL;
    SEP;

    const auto result_four{cpp::add_four(a , b)};
    out << "value of result four is: " << result_four << NL;
    SEP;

    const auto result_five{cpp::add_five(a , b)};
    out << "value of result five is: " << result_five << NL;
    SEP;

    const auto result_six{cpp::add_six(a , b)};
    out << "value of result six is: " << result_six << NL;
    SEP;


    out << "\n #(15:25:13): The End ..." << eln;
    return EXIT_SUCCESS;
}
