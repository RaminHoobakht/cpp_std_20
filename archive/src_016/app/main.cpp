/* dangling pointer: multiple pointer points to the same address */

#include <iostream>
#include "../header/main.hpp"


int main() {

    int *ptr_number1{new int{120}};
    int *ptr_number2{ptr_number1};

    util::separator();
    std::cout << "address of ptr_number1 is: " << ptr_number1 << NL;
    std::cout << "address of ptr_number2 is: " << ptr_number2 << NL;

    util::separator();
    std::cout << "value of ptr_number1 is: " << *ptr_number1 << NL;
    std::cout << "value of ptr_number2 is: " << *ptr_number2 << NL;

    delete ptr_number1;
    delete ptr_number2; /* encounter with compile time error */

    std::cout << "\n #(01:43:31): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
