/*
 *	Subject:
 *		inline vs static or anonymous namespace:
            - inline optimize all the definitions for a name into one.
            - static or unnamed namespace won't do such optimization.
 */


#include "main.hpp"

void print_age_1() noexcept;
void print_age_2() noexcept;

void print_distance_1() noexcept;
void print_distance_2() noexcept;


int main() {


    print_age_1();
    SEP;

    print_age_2();
    SEP;

    print_distance_1();
    SEP;

    print_distance_2();
    SEP;


    pout << "\n #(23:48:45): The End ..." << eln;
    return EXIT_SUCCESS;
}
