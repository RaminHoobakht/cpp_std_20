/*
 *	Subject:
 *		using inline for preventing to get redefine compile time error.
 *
 */


#include "main.hpp"
#include "utility.h"

extern void print_age_utility1() noexcept;

extern void print_age_utility2() noexcept;


int main() {


    print_age_utility1();
    print_age_utility2();


    pout << "\n #(22:49:20): The End ..." << eln;
    return EXIT_SUCCESS;
}
