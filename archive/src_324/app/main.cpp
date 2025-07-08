#include "main.hpp"


int main() {

    using point = entity::point;


    point point_one{120.36, 96.54};
    point point_two{98.52, 74.52};

    pout << "information of point_one is: " << point_one << NL;
    SEP;

    pout << "information of point_two is: " << point_two << NL;
    SEP;

    pout << "point_one == point_two: " << (point_one == point_two) << NL;
    pout << "point_one > point_two : " << (point_one > point_two) << NL;
    pout << "point_one < point_two : " << (point_one < point_two) << NL;
    pout << "point_one >= point_two: " << (point_one >= point_two) << NL;
    pout << "point_one <= point_two: " << (point_one <= point_two) << NL;
    pout << "point_one != point_two: " << (point_one != point_two) << NL;

    pout << "\n #(18:25:45): The End ..." << eln;
    return EXIT_SUCCESS;
}
