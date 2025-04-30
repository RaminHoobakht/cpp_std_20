/* Subject: deep into the concepts especially requires keyword   */

#include "main.hpp"
#include "src/header/testmodule.hpp"
#include "src/header/utillib.hpp"


int main() {

    LF;

    constexpr long a{20};
    constexpr long b{15};

    const auto result_one{cpp::add_one(a, b)};
    out << "value of result one is: " << result_one << NL;
    SEP;

    const auto result_two{cpp::add_two(a, b)};
    out << "value of result two is: " << result_two << NL;
    SEP;


    out << "\n #(19:08:57): The End ..." << eln;
    return EXIT_SUCCESS;
}
