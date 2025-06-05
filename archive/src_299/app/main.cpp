/*
 *  Subject: Using Smart Pointer:
 *              - using weak smart pointer
 *
 * */

#include "main.hpp"

using person = entity::person;

int main() {

    /* {"Haruyoshi", "Muratsubaki", 1001, 65}; */
    /* {"Hinata", "Chikao", 1002, 64}; */

    LF;

    std::shared_ptr<person> muratsubaki{
            std::make_shared<person>("Haruyoshi", "Muratsubaki", 1001, 65)};

    std::shared_ptr<person> hinata{
            std::make_shared<person>("Hinata", "Chikao", 1002, 64)};

    muratsubaki->set_friend(hinata);
    hinata->set_friend(muratsubaki);


    pout << "\n #(03:51:31): The End ..." << eln;
    return EXIT_SUCCESS;
}
