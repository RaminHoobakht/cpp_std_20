/*
 *  Subject: operator overloading
 *
 * */

#include "main.hpp"

using scores = entity::scores;


int main() {

    // scores my_scores{"Math"};
    // my_scores.print_info();

    // my_scores[5] = 63.25;
    // my_scores.print_info();

    // my_scores[0] = 73.36;
    // for (size_t i{1}; i < 20; ++i) {
    //     my_scores[i] = my_scores[i - 1] + 0.54;
    // }

    // my_scores.print_info();


    const scores geography("Geography");

    pout << geography[5] << NL;

    pout << "\n #(22:03:21): The End ..." << eln;
    return EXIT_SUCCESS;
}
