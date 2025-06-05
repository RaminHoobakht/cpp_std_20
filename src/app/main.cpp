/*
 *  Subject: Using Smart Pointer:
 *              - using shared smart pointer as a function parameter
 *
 * */

#include "main.hpp"

using person = entity::person;


void some_do_for_person(const std::shared_ptr<person> &prn) noexcept;
std::shared_ptr<person> get_shared_pointer() noexcept;


int main() {

    /* {"Haruyoshi", "Muratsubaki", 1001, 64}; */

    LF;

    auto result{get_shared_pointer()};
    SEP;

    result->display_person();
    SEP;


    pout << "\n #(03:43:38): The End ..." << eln;
    return EXIT_SUCCESS;
}

void some_do_for_person(const std::shared_ptr<person> &prn) noexcept {
    pout << "inside the function: " << NL;
    pout << "use count is: " << prn.use_count() << NL;
    prn->display_person();
    prn->set_first_name("Hinata");
}

std::shared_ptr<person> get_shared_pointer() noexcept {
    pout << "inside the function: " << NL;
    std::shared_ptr<person> hinata{
            std::make_shared<person>("Hinta", "Chikao", 1002, 64)};
    return hinata;
}
