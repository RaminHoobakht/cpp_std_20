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

    pout << "share smart pointer with primitive type:" << NL;
    std::shared_ptr<int> int_ptr_1{new int{20}};
    pout << "int_ptr_1-> the pointer to value is: " << *int_ptr_1 << NL;
    *int_ptr_1 = 40;
    pout << "int_ptr_1-> the pointer to value is: " << *int_ptr_1 << NL;
    pout << "int_ptr_1-> use count is: " << int_ptr_1.use_count() << NL;
    SEP;

    pout << "copy ..." << NL;
    std::shared_ptr<int> int_ptr_2 = int_ptr_1;
    pout << "int_ptr_2-> the pointer to value is: " << *int_ptr_2 << NL;
    *int_ptr_2 = 70;
    pout << "int_ptr_1-> the pointer to value is: " << *int_ptr_1 << NL;
    pout << "int_ptr_2-> the pointer to value is: " << *int_ptr_2 << NL;
    pout << "int_ptr_1-> use count is: " << int_ptr_1.use_count() << NL;
    pout << "int_ptr_2-> use count is: " << int_ptr_2.use_count() << NL;
    SEP;

    std::shared_ptr<int> int_ptr_3;
    std::shared_ptr<int> int_ptr_4{nullptr};
    std::shared_ptr<int> int_ptr_5;

    int_ptr_3 = int_ptr_1;
    int_ptr_4 = int_ptr_1;
    int_ptr_5 = int_ptr_1;

    *int_ptr_5 = 100;

    pout << "int_ptr_1-> the pointer to value is: " << *int_ptr_1 << NL; // 70
    pout << "int_ptr_2-> the pointer to value is: " << *int_ptr_2 << NL; // 70
    pout << "int_ptr_3-> the pointer to value is: " << *int_ptr_3 << NL; // 70
    pout << "int_ptr_4-> the pointer to value is: " << *int_ptr_4 << NL; // 70
    pout << "int_ptr_5-> the pointer to value is: " << *int_ptr_5 << NL; // 70
    SEP;

    pout << "int_ptr_1-> use count is: " << int_ptr_1.use_count() << NL;
    pout << "int_ptr_2-> use count is: " << int_ptr_2.use_count() << NL;
    pout << "int_ptr_3-> use count is: " << int_ptr_3.use_count() << NL;
    pout << "int_ptr_4-> use count is: " << int_ptr_4.use_count() << NL;
    pout << "int_ptr_5-> use count is: " << int_ptr_5.use_count() << NL;
    SEP;

    int_ptr_5.reset();

    pout << "after reset int_ptr_5: " << NL;
    pout << "int_ptr_1-> use count is: " << int_ptr_1.use_count() << NL;
    pout << "int_ptr_2-> use count is: " << int_ptr_2.use_count() << NL;
    pout << "int_ptr_3-> use count is: " << int_ptr_3.use_count() << NL;
    pout << "int_ptr_4-> use count is: " << int_ptr_4.use_count() << NL;
    pout << "int_ptr_5-> use count is: " << int_ptr_5.use_count() << NL;
    SEP;

    pout << "casing to bool and using in if statement: " << NL;
    pout << "int_ptr_4     : " << int_ptr_4 << NL;
    pout << "int_ptr_4.get : " << int_ptr_4.get() << NL;
    pout << "int_ptr_4 -> bool: " << static_cast<bool>(int_ptr_4) << NL;
    pout << "int_ptr_5 -> bool: " << static_cast<bool>(int_ptr_5) << NL;
    SEP;

    if (int_ptr_4) {
        pout << "int_ptr_4 is pointing to a valid value ..." << NL;
    } else {
        pout << "int_ptr_4 is pointing to a invalid value ..." << NL;
    }

    if (int_ptr_5) {
        pout << "int_ptr_5 is pointing to a valid value ..." << NL;
    } else {
        pout << "int_ptr_5 is pointing to a invalid value ..." << NL;
    }
    SEP;

    std::shared_ptr<int> int_ptr_6{std::make_shared<int>(*int_ptr_1)};
    pout << "value of inpt_ptr_6 is: " << *int_ptr_6 << NL;
    pout << "use count is: " << int_ptr_6.use_count() << NL;
    SEP;

    std::shared_ptr<person> person_1{
            std::make_shared<person>("Ramin", "Hoobakht", 1001, 64)};


    pout << "\n #(22:46:52): The End ..." << eln;
    return EXIT_SUCCESS;
}
