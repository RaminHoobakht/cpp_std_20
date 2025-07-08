#include "main.hpp"

namespace {
    using integer = entity::integer;
    using point = entity::point;
} // namespace

int main() {
    LF_SEP;

    const integer x{50};
    const integer y{41};

    pout << "10 == y : " << (10 == y) << NL;
    pout << "x == 10 : " << (x == 10) << NL;
    SEP;

    const point point_one{71.62, 69.57};
    const point point_two{36.85, 74.95};

    pout << "point_one > point_two : " << (point_one > point_two) << NL;
    pout << "point_one < point_two : " << (point_one < point_two) << NL;


    pout << "\n #(00:00:00): The End ..." << eln;
    return EXIT_SUCCESS;
}
