/*
    reference of the x variable within main function is deference between
    within desplay_reference() function. although it passing to the function
    by reference. I don not why?

 */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout << SP
#define log std::clog << SP
#define err std::cerr << SP

void display_refrecnce(int *num) noexcept;

int main() {

    LF;

    int x{36};

    out << "main before: value of x variable is: " << x << NL;
    out << "main before: reference of the x variable is: " << &x << NL;
    LF_SEP_LF;

    display_refrecnce(&x);


    out << "main after: value of x variable is: " << x << NL;
    out << "main after: reference of the x variable is: " << &x << NL;
    LF_SEP_LF;


    std::cout << "\n #(09:16:35): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

void display_refrecnce(int *num) noexcept {
    out << "dr func before: value of num variable is: " << *num << NL;
    out << "dr func before: reference of num is: " << &num << NL;
    *num = 120;
    out << "dr func after : value of num variable is: " << *num << NL;
    out << "dr func after : reference of num is: " << &num << NL;
    LF_SEP_LF;
}
