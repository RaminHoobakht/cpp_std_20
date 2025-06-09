/*
 *  Subject: operator overloading
 *
 * * */

#include "main.hpp"

int main() {
    /* code */

    entity::point3 point_one{120.36, 45.78};
    SEP;

    point_one.print_info();
    SEP;

    pout << "enter x and y for point_one: ";
    cin >> point_one;
    point_one.print_info();
    SEP;

    pout << "\n #(04:36:46): The End ..." << eln;
    return EXIT_SUCCESS;
}
