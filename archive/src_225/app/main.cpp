/* Subject: building custom concepts  */

#include "main.hpp"
#include "src/header/testmodule.hpp"
#include "src/header/utillib.hpp"


int main() {

    LF;

    int a{120};
    int b{220};

    const auto result_one{cpp::add_one(a, b)};
    out << "value of result one is: " << result_one << NL;
    SEP;

    const auto result_two{cpp::add_two(a, b)};
    out << "value of result two is: " << result_two << NL;
    SEP;

    const auto result_three{cpp::add_three(a, b)};
    out << "value of result three is: " << result_three << NL;
    SEP;


    out << "\n #(22:49:53): The End ..." << eln;
    return EXIT_SUCCESS;
}
