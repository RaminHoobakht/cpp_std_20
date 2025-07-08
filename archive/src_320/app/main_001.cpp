/*
 *  Subject: unary increment prefix overloading
 *
 * * */

#include "main.hpp"

using integer = entity::integer;


int main() {

    integer int_num1{220};
    pout << "value of int_num1 is: " << int_num1 << NL;
    SEP;

    pout << "value of ++int_num1 is: " << ++int_num1 << NL;
    SEP;



    pout << "\n #(06:46:41): The End ..." << eln;
    return EXIT_SUCCESS;
}


