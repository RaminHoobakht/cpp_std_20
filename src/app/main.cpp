/*
 *  Subject: operator overloading
 *
 * * */

#include "main.hpp"

int main() {
    /* code */

    entity::point4 point_one{12.36, 23.52};
    entity::point4 point_two{11.41, 31.12};

    // pout << "point_one: " << NL;
    //  point_one.print_info();
    //  SEP;

    // pout << "point_tow: " << NL;
    // point_two.print_info();
    // SEP;

    pout << "point_three (adding): " << NL;
    entity::point4 point_three{point_one + point_two};
    point_three.print_info();
    SEP;

    pout << "point_four (subtracing): " << NL;
    entity::point4 point_four{point_one - point_two};
    point_four.print_info();
    SEP;

    pout << "(point_three += point_four): " << NL;
    (point_three += point_four).print_info();
    SEP;

    pout << "(point_three -= point_four): " << NL;
    (point_three -= point_four).print_info();
    SEP;


    pout << "\n #(07:53:58): The End ..." << eln;
    return EXIT_SUCCESS;
}
