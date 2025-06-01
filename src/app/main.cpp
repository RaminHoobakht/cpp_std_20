/*
 *  Subject: Using Smart Pointer:
 *              - using unique smart pointer with array
 *
 * */

#include "main.hpp"
#include <memory>

using person = entity::person;

std::shared_ptr<person> get_shared_pointer() noexcept;


int main() {

    /* {"Ramin", "Hoobakht", 1001, 64}; */

    LF;


    std::shared_ptr<person> hinata{get_shared_pointer()};
    pout << "inside the main function: " << NL;
    hinata->display_person();
    SEP;

    pout << "\n #(20:15:09): The End ..." << eln;
    return EXIT_SUCCESS;
}

std::shared_ptr<person> get_shared_pointer() noexcept {
    pout << "inside the get_shared_pointer() function: " << NL;
    std::unique_ptr<person> hinata{
            std::make_unique<person>("Ramin", "Hoobakht", 1001, 64)};
    hinata->display_person();
    SEP;
    return hinata;
}
