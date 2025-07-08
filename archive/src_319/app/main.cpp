/*
 *  Subject: unary increment prefix overloading
 *
 * * */

#include "main.hpp"

using integer = entity::integer;


int main() {

    integer int_num1{220};
    integer int_num2{10};

    pout << "value of int_num1 is: " << int_num1 << NL; // 220
    pout << "value of int_num2 is: " << int_num2 << NL; // 10
    SEP;

    integer int_num3{int_num1 + int_num2};
    pout << "value of int_num3(+): " << int_num3 << NL; // 230
    SEP;

    integer int_num4{int_num1 - int_num2};
    pout << "value of int_num3(-): " << int_num4 << NL; // 210
    SEP;

    integer int_num5{int_num1 / int_num2};
    pout << "value of int_num3(/): " << int_num5 << NL; // 22
    SEP;

    integer int_num6{int_num1 * int_num2};
    pout << "value of int_num3(*): " << int_num6 << NL; // 2200
    SEP;

    integer int_num7{int_num1 % int_num2};
    pout << "value of int_num3(%): " << int_num7 << NL; // 0
    SEP;


    pout << "\n #(02:57:01): The End ..." << eln;
    return EXIT_SUCCESS;
}
