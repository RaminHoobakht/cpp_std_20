/* dangling pointer: deleted pointer */

#include "../header/main.hpp"
#include <iostream>


int main() {

    int *ptr_number{new int{120}};

    std::cout << "address of the ptr_number is: " << ptr_number << NL;
    std::cout << "value of ptr_number is      : " << *ptr_number << NL;
    util::separator();

    delete ptr_number;

    /* junk pointer */
    std::cout << "address of the ptr_number is: " << ptr_number << NL;
    std::cout << "value of ptr_number is      : " << *ptr_number << NL;
    util::separator();

    std::cout << "\n #(21:59:11): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
