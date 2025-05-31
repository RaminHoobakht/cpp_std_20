/*
 *  Subject: Using Smart Pointer:
 *              - using unique smart pointer with array
 *
 * */

#include "main.hpp"
#include <memory>


using person = entity::person;


int main() {

    // {"Ramin", "Hoobakht", 1001, 64};
    // person{"Ramin", "Hoobakht", 1001, 64}

    SEP;

    pout << "initial a unique pointer person array with 3 members ..." << NL;
    std::unique_ptr<person[]> person_list{std::make_unique<person[]>(3)};
    SEP;

    pout << "assign person in each loop in for-loop for three times ..." << NL;
    for (size_t i{0UL}; i < 3; ++i) {
        person_list[i] = person{"Ramin", "Hoobakht", 1001, 64};
        SEP;
    }

    pout << "display person information in for-loop for three times ..." << NL;
    SEP;
    for (size_t i{0UL}; i < 3; ++i) {
        person_list[i].display_person();
        SEP;
    }


    pout << "\n #(19:21:07): The End ..." << eln;
    return EXIT_SUCCESS;
}
