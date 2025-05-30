/*
 *  Subject: Using Smart Pointer:
 *              - using unique smart pointer
 *
 * */

#include "main.hpp"

using person = entity::person;

void some_do_with_person_function(std::unique_ptr<person> prn) noexcept;

int main() {

    // {"Hinata", "Chikao", 1001, 64}

    SEP;
    std::unique_ptr<person> hinata{
            std::make_unique<person>("Hinata", "Chikao", 1001, 64)};

    /* not allowed. below line encounter with compile time error */
    // some_do_with_person_function(hinata);

    some_do_with_person_function(std::move(hinata));


    pout << "\n #(20:08:09): The End ..." << eln;
    return EXIT_SUCCESS;
}

void some_do_with_person_function(std::unique_ptr<person> prn) noexcept {
    /* code */
    prn->display_person();
}
