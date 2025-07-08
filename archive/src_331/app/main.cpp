#include "main.hpp"

namespace {
    using integer = entity::integer;
}

int main() {
    LF_SEP;

    const integer integer_one{120};
    const integer integer_two{121};

    pout << "integer_one is: " << integer_one << NL;
    pout << "integer_two is: " << integer_two << NL;
    SEP;

    pout << "integer_one == integer_two : " << (integer_one == integer_two) << NL;
    pout << "integer_one > integer_two : " << (integer_one > integer_two) << NL;
    pout << "integer_one >= integer_two : " << (integer_one >= integer_two) << NL;
    pout << "integer_one < integer_two : " << (integer_one < integer_two) << NL;
    pout << "integer_one <= integer_two : " << (integer_one <= integer_two) << NL;
    pout << "integer_one != integer_two : " << (integer_one != integer_two) << NL;
    SEP;

    pout << "121 == integer_two : " << (121 == integer_two) << NL;
    pout << "integer_one == 121 : " << (integer_one == 121) << NL;
    SEP;

    pout << "121 != integer_two : " << (121 != integer_two) << NL;
    pout << "integer_one != 121 : " << (integer_one != 121) << NL;
    SEP;

    pout << "integer_one + integer_two : " << integer_one + integer_two << NL;
    pout << "integer_one - integer_two : " << integer_one - integer_two << NL;
    pout << "integer_one / integer_two : " << integer_one / integer_two << NL;
    pout << "integer_one * integer_two : " << integer_one * integer_two << NL;
    pout << "integer_one % integer_two : " << integer_one % integer_two << NL;
    SEP;

    pout << "200 + integer_two : " << 200 + integer_two << NL;
    pout << "integer_one + 200 : " << integer_one + 200 << NL;
    SEP;

    pout << "\n #(08:52:32): The End ..." << eln;
    return EXIT_SUCCESS;
}
