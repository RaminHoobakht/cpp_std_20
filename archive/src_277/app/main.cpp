/*
 *  Subject:
 *
 * */

#include "main.hpp"


int main() {

    auto r1{add(120, 350)};
    auto r2{sub(120, 350)};

    pout << "result of add function is: " << r1 << NL;
    pout << "result of sub function is: " << r2 << NL;


    pout << "\n #(08:34:15): The End ..." << eln;
    return EXIT_SUCCESS;
}
