#include "../header/main.hpp"
#include <iostream>


int main() {

    /* dynamic allocate int size memory and assign value directly in one line */
    int *ptr_number{new int{55}};

    /* print the value of the ptr_number pointer variable */
    std::cout << " value of the ptr_number is: " << *ptr_number << NL;

    /* remove allocated space of ptr_number from the heap memory */
    delete ptr_number;

    std::cout << "\n #(21:54:14): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
