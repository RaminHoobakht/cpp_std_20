#include "main.hpp"

namespace {
    using point = entity::point;
    using integer = entity::integer;
}

int main() {
    LF_SEP;

    constexpr integer x{55};
    constexpr integer y{66};

    pout << "value of x is: " << x << NL;
    pout << "value of y is: " << y << NL;
    SEP;

    pout << "x == y : " << (x == y) << NL;
    pout << "10 == y : " << (10 == y) << NL;
    pout << "x == 20 : " << (x == 20) << NL;
    SEP;

    pout << "x > y : " << (x > y) << NL;
    pout << "10 < y : " << (10 < y) << NL;
    pout << "x <= 20 : " << (x <= 20) << NL;
    SEP;
    SEP;

    const point point_one{120.36, 66.87};
    const point point_two{41.72, 99.58};

    pout << "point_one == point_two : " << (point_one == point_two) << NL;
    pout << "point_one < point_two : " << (point_one < point_two) << NL;
    pout << "point_one > point_two : " << (point_one > point_two) << NL;
    pout << "point_one != point_two : " << (point_one != point_two) << NL;

    pout << "\n #(19:16:20): The End ..." << eln;
    return EXIT_SUCCESS;
}
