/*
 *  Subject: Using Smart Pointer:
 *              - using shared smart pointer as a function parameter
 *
 * */

#include "main.hpp"

using person = entity::person;


void some_do_for_person(const std::shared_ptr<person> &prn) noexcept;


int main() {

    /* {"Haruyoshi", "Muratsubaki", 1001, 64}; */

    LF;

    std::shared_ptr<person> muratsubaki{
            std::make_shared<person>("Haruyoshi", "Muratsubaki", 1001, 64)};
    SEP;

    some_do_for_person(muratsubaki);
    SEP;

    muratsubaki->display_person();
    SEP;

    pout << "\n #(03:29:26): The End ..." << eln;
    return EXIT_SUCCESS;
}

void some_do_for_person(const std::shared_ptr<person> &prn) noexcept {
    pout << "inside the function: " << NL;
    pout << "use count is: " << prn.use_count() << NL;
    prn->display_person();
    prn->set_first_name("Hinata");
}
