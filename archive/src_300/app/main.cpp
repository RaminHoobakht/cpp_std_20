/*
 *  Subject: operator overloading
 *
 * */

#include "main.hpp"

using point = entity::point3;

int main() {

    LF;

    point point_one{120.36, 71.14};
    SEP;

    point_one.print_info();
    SEP;

    point point_two{15.85, 41.74};
    SEP;

    point_two.print_info();
    SEP;

    point point_three{point_one + point_two};
    SEP;

    point_three.print_info();
    SEP;


    (point_one + point_two + point_three).print_info();


    pout << "\n #(06:43:27): The End ..." << eln;
    return EXIT_SUCCESS;
}
