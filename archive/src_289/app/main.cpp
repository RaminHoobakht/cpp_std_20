/*
 *  Subject: Using Smart Pointer:
 *              - using shared smart pointer
 *
 * */

#include "main.hpp"


using person = entity::person;


int main() {

    // {"Ramin", "Hoobakht", 1001, 64};
    // person{"Ramin", "Hoobakht", 1001, 64}

    LF;

    pout << "display from unique smart pointer ..." << NL;
    std::unique_ptr<person> ramin{
            std::make_unique<person>("Ramin", "Hoobakht", 1001, 64)};
    ramin->display_person();
    SEP;

    pout << "display from shared smart pointer ..." << NL;
    std::shared_ptr<person> ramin2{std::move(ramin)};
    ramin2->display_person();
    SEP;

    /* encounter with compile time error.
     * because ramin object is equals to nullptr */
    pout << "display from unique smart pointer ..." << NL;
    ramin->display_person();
    SEP;


    pout << "\n #(06:12:52): The End ..." << eln;
    return EXIT_SUCCESS;
}
