#include "main.hpp"

namespace {
    using integer = entity::integer;
}

int main() {
    LF_SEP;

    const integer x{120};
    const integer y{500};

    pout << "x == y : " << (x == y) << NL;
    pout << "x >  y : " << (x > y) << NL;
    pout << "x >= y : " << (x >= y) << NL;
    pout << "x < y  : " << (x < y) << NL;
    pout << "x <= y : " << (x <= y) << NL;
    pout << "x != y : " << (x != y) << NL;
    SEP;

    pout << "100 == y : " << (100 == y) << NL;
    pout << "x == 101 : " << (x == 101) << NL;
    SEP;

    pout << "100 != y : " << (100 != y) << NL;
    pout << "x != 101 : " << (x != 101) << NL;
    SEP;

    pout << "\n #(00:00:00): The End ..." << eln;
    return EXIT_SUCCESS;
}
