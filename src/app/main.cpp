/*
 *  Subject: custom type conversion
 *
 * * */

#include "main.hpp"

using number = entity::number;


int main() {
    /* code */

    number my_number{120};

    pout << "value of my_number: " << my_number << NL;
    SEP;

    pout << "value of (my_number + 2): " << (my_number + 2) << NL;
    SEP;

    pout << "value of (2 + my_number): " << (2 + my_number) << NL;
    SEP;

    pout << "value of (my_number - 2): " << (my_number - 2) << NL;
    SEP;

    pout << "value of (2 - my_number): " << (2 - my_number) << NL;
    SEP;

    pout << "\n #(22:13:07): The End ..." << eln;
    return EXIT_SUCCESS;
}
