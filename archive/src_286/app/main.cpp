/*
 *  Subject: Using Smart Pointer:
 *              - using unique smart pointer
 *
 * */

#include "main.hpp"
#include <memory>

using person = entity::person;

void some_do_with_person01(std::unique_ptr<person> prn) noexcept;
void some_do_with_person02(std::unique_ptr<person> &prn) noexcept;
std::unique_ptr<person> get_person_unique_ptr() noexcept;

int main() {

    SEP;


    //    std::unique_ptr<person> ramin{
    //            std::make_unique<person>("Ramin", "Hoobakht", 1002, 64)};


    /* encounter with compile time error */
    //    some_do_with_person(ramin);


    //    some_do_with_person(std::move(ramin));
    //    SEP;
    //
    //    pout << "display ramin object information: " << NL;
    //    ramin->display_person();
    //    SEP;


    //    some_do_with_person01(
    //            std::make_unique<person>("Ramin", "Hoobakht", 1001, 64));


    //    std::unique_ptr<person> ramin{
    //            std::make_unique<person>("Ramin", "Hoobakht", 1002, 64)};
    //    SEP;
    //
    //    pout << "display ramin object in the main function ..." << NL;
    //    ramin->display_person();
    //    SEP;
    //
    //    some_do_with_person02(ramin);
    //    SEP;
    //
    //    pout << "display ramin object in the main function for the second time
    //    ..."
    //         << NL;
    //    ramin->display_person();
    //    SEP;


    //    auto result{get_person_unique_ptr()};
    //    pout << "address of created object outside of the function: " <<
    //    &result
    //         << NL;

    get_person_unique_ptr()->display_person();

    pout << "\n #(00:50:51): The End ..." << eln;
    return EXIT_SUCCESS;
}

/* ----------------- */

void some_do_with_person01(std::unique_ptr<person> prn) noexcept {
    pout << "(in the function 01) -> display person information ..." << NL;
    prn->display_person();
}

void some_do_with_person02(std::unique_ptr<person> &prn) noexcept {
    pout << "(in the function 02) -> display person information ..." << NL;
    prn->display_person();
    // prn.release(); // release the memory in the BAD way
}

std::unique_ptr<person> get_person_unique_ptr() noexcept {
    std::unique_ptr<person> ramin{
            std::make_unique<person>("Ramin", "Hoobakht", 1002, 64)};
    pout << "address of object inside of the function: " << &ramin << NL;
    return ramin;
}
