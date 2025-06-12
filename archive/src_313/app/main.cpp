/*
 *  Subject: custom type conversion
 *
 * * */

#include "main.hpp"

int main() {

    entity::number my_number{120};

    pout << "value of my_number is: " << my_number << NL;
    SEP;
    
    ++my_number;
    pout << "value of my_number is: " << my_number << NL; // 121
    SEP;

    pout << "value of my_number is: " << my_number++ << NL; // 121
    SEP;

    pout << "value of my_number is: " << my_number << NL; // 122
    SEP;

    pout << "\n #(06:02:58): The End ..." << eln;
    return EXIT_SUCCESS;
}
