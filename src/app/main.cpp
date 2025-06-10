/*
 *  Subject: operator overloading
 *
 * * */

#include "main.hpp"

int main() {
    /* code */

    entity::point4 point_one{12.36, 23.52};
    entity::point4 point_two{33.74, 69.85};

    pout << "point one: " << NL;
    point_one.print_info();
    SEP;

    pout << "point two: " << NL;
    point_two.print_info();
    SEP;

    pout << "point three (adding): " << NL;
    entity::point4 point_three{point_one + point_two};
    point_three.print_info();
    SEP;


    pout << "point three (subtracing): " << NL;
    entity::point4 point_four{point_one - point_two};
    point_four.print_info();
    SEP;


    pout << "\n #(05:33:58): The End ..." << eln;
    return EXIT_SUCCESS;
}
