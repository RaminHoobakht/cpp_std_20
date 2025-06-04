/*
 *  Subject: Using Smart Pointer:
 *              - using shared smart pointer with arrays
 *                person object.
 *
 * */

#include "main.hpp"

using person = entity::person;


int main() {

    /* {"Ramin", "Hoobakht", 1001, 64}; */

    LF;


    pout << "creating a shared smart pointer array for three person object ..."
         << NL;
    std::shared_ptr<person[]> person_list{new person[3]{}};
    SEP;

    pout << "initializing person_list ..." << NL;
    for (uint i{0}; i < 3; ++i) {
        person_list[i] =
                person{"Ramin", "Hoobakht", 1001 + (i * 10), 64 + (i * 10)};
        SEP;
    }
    pout << "the end of the initialization ..." << NL;
    SEP;

    pout << "display all member of the person_list in for-loop ..." << NL;
    for (uint i{0}; i < 3; ++i) {
        person_list[i].display_person();
        SEP;
    }

    SEP;

    pout << "\n #(23:18:59): The End ..." << eln;
    return EXIT_SUCCESS;
}