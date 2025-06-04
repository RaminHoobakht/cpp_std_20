/*
 *  Subject: Using Smart Pointer:
 *              - using shared smart pointer as a function parameter
 *
 * */

#include "main.hpp"

using person = entity::person;


void some_do_for_person(std::shared_ptr<person> &prn) noexcept;


int main() {

    /* {"Haruyoshi", "Muratsubaki", 1001, 64}; */

    LF;

    pout << "inside main: creating muratsubaki person ..." << NL;
    std::shared_ptr<person> muratsubaki{
            std::make_shared<person>("Haruyoshi", "Muratsubaki", 1001, 64)};
    SEP;

    pout << "inside main: muratsubaki of use count is: "
         << muratsubaki.use_count() << NL;
    SEP;

    some_do_for_person(muratsubaki);
    SEP;

    pout << "inside main: muratsubaki use count is: " << muratsubaki.use_count()
         << NL;


    pout << "\n #(03:21:40): The End ..." << eln;
    return EXIT_SUCCESS;
}

void some_do_for_person(std::shared_ptr<person> &prn) noexcept {
    pout << "inside the function: " << NL;
    pout << "use count is: " << prn.use_count() << NL;
    prn->display_person();
}
