/* Subject:  */
#include "main.hpp"
#include "config.h"

using point2 = entity::point2;

int main() {
    LF;

    point2 my_point{120.36, 52.13};

    long double result{my_point.length()};
    pout << "value of result is: " << result << NL;
    SEP;

    pout << "\n #(21:04:19): The End ..." << eln;
    return EXIT_SUCCESS;
}
