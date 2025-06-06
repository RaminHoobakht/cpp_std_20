/*
 *  Subject: operator overloading ([])
 *
 * */

#include "main.hpp"

using point = entity::point3;


int main() {

    point my_point{123.654, 789.654};

    pout << "value of x point is: " << my_point[0] << NL;
    pout << "value of y point is: " << my_point[1] << NL;
    
    // pout << "value of y point is: " << my_point[2] << NL;

    pout << "\n #(20:19:58): The End ..." << eln;
    return EXIT_SUCCESS;
}
