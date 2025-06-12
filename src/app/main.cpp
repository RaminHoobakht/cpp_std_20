/*
 *  Subject: custom type conversion
 *
 * * */

#include "main.hpp"

int main() {
    /* code */

    entity::number my_number{120};
    pout << "value of my_number: " << my_number << NL;
    SEP;


    for (size_t i{0UL}; i < 20; ++i) {
        pout << "current value is: " << ++my_number << NL;
    }
    SEP;


    pout << "\n #(03:43:45): The End ..." << eln;
    return EXIT_SUCCESS;
}
