#include "main.hpp"

using number = entity::number;
using point = entity::point;

int main() {
    
    point point_one{30.52, 85.21};
    number number_one{120};

    pout << "value of point_one is: " << point_one << NL;
    pout << "value of number is: " << number_one << NL;
    SEP;

    point point_two{number_one};
    pout << "value of point_two is: " << point_two << NL;
    SEP;

    point_one = number_one;
    pout << "value of point_one is: " << point_one << NL;

    pout << "\n #(21:51:45): The End ..." << eln;
    return EXIT_SUCCESS;
}
