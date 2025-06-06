/*
 *  Subject: operator overloading (+)
 *
 * */

#include "main.hpp"

using point = entity::point3;

int main() {

    pout << "create point one: " << NL;
    point point_one{120.36, 96.52};
    point_one.print_info();
    SEP;


    pout << "create point two: " << NL;
    point point_two{87.12, 54.21};
    point_two.print_info();
    SEP;

    pout << "create point three: " << NL;
    point point_three{point_one + point_two};
    SEP;

    pout << "print information for point three: " << NL;
    point_three.print_info();
    SEP;

    pout << "\n #(04:52:38): The End ..." << eln;
    return EXIT_SUCCESS;
}
