#include "main.hpp"


using point = entity::point;


int main() {

    point point_one{120.36, 96.54};
    point point_two{98.52, 74.52};

    pout << "information of point_one is: " << point_one << NL;
    SEP;

    pout << "information of point_two is: " << point_two << NL;
    SEP;

    if (point_one > point_two) {
        pout << "point_one is greater than point_two ..." << NL;
    } else {
        pout << "point_one is not greater than point_two ..." << NL;
    }


    pout << "\n #(18:25:45): The End ..." << eln;
    return EXIT_SUCCESS;
}

