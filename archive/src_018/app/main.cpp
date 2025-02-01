#include "../header/main.hpp"
#include <iostream>


int main() {

    int *ptr_number1{};
    int *ptr_number2{new int{120}};

    std::cout << " check ptr_number1: ";
    if (ptr_number1 != nullptr) {
        std::cout << " value of ptr_number1 is: " << *ptr_number1 << NL;
    } else {
        std::cout << " nullptr" << NL;
    }

    std::cout << " check ptr_number2: ";
    if (ptr_number2 != nullptr) {
        std::cout << " value of ptr_number2 is: " << *ptr_number2 << NL;
    } else {
        std::cout << " nullptr" << NL;
    }


    std::cout << "\n #(01:54:09): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
