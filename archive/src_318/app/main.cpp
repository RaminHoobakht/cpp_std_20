/*
 *  Subject: unary increment prefix overloading
 *
 * * */

#include "main.hpp"

using integer = entity::integer;


int main() {

    integer int_num{150};
    pout << "value of int_num: " << int_num.get_integer() << NL;
    SEP;

    int_num.set_number(750);
    pout << "value of int_num: " << int_num.get_integer() << NL;
    SEP;

    integer int_num2{int_num};
    pout << "value of int_num2: " << int_num2.get_integer() << NL;
    SEP;

    integer int_num3{std::move(int_num2)};
    pout << "value of int_num3: " << int_num3.get_integer() << NL;
    pout << "value of int_num2: " << int_num2.get_integer() << NL;
    SEP;


    pout << "\n #(03:39:57): The End ..." << eln;
    return EXIT_SUCCESS;
}
