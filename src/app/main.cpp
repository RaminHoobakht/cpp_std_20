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

    pout << "creating person_list for three person object on the heap ... "
         << NL;
    std::shared_ptr<std::shared_ptr<person>[]> person_list{
            std::make_shared<std::shared_ptr<person>[]>(3)};
    SEP;

    pout << "initializing person list by person object that created on the "
            "heap one by one ..."
         << NL;
    for (uint i{0}; i < 3; ++i) {
        person_list[i] = std::make_shared<person>(
                "Ramin", "Hoobakht", 1001 + (i * 10), 64 + (i * 10));
        SEP;
    }
    SEP;

    pout << "display all person information ..." << NL;
    for (uint i{0}; i < 3; ++i) {
        person_list[i]->display_person();
        SEP;
    }
    SEP;


    pout << "\n #(00:51:14): The End ..." << eln;
    return EXIT_SUCCESS;
}
