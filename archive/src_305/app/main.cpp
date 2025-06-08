/*
 *  Subject: operator overloading
 *
 * */

#include "main.hpp"

using scores = entity::scores;


int main() {

    scores geography{"Geography"};

    geography[0] = 75.23;
    for (size_t i{1UL}; i < 20; ++i) {
        geography[i] = geography[i - 1] + 0.73;
    }

    pout << geography << NL;


    pout << "\n #(07:46:59): The End ..." << eln;
    return EXIT_SUCCESS;
}
