/*
 *  Subject: operator overloading
 *
 * */

#include "main.hpp"

using point = entity::point3;


int main() {

    point point_one{123.654, 963.258};
    SEP;

    point_one.print_info();
    SEP;

    pout << "value of x is: " << point_one[0] << NL;
    SEP;

    pout << "value of y is: " << point_one[1] << NL;
    SEP;

    point_one[0] = 1000;
    point_one[1] = 2000;

    pout << "value of x is: " << point_one[0] << NL;
    SEP;

    pout << "value of y is: " << point_one[1] << NL;
    SEP;


    pout << "\n #(22:03:21): The End ..." << eln;
    return EXIT_SUCCESS;
}
