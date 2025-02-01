#include "../header/main.hpp"
#include <iostream>


int main() {

    /* create a pointer that points to the nullptr */
    int *ptr_number{nullptr};

    /* allocate int size memory on the heap */
    ptr_number = new int;

    /* assign an integer number  */
    *ptr_number = 55;

    /* print the value of the specific heap address memory */
    std::cout << "value of ptr_number is: " << *ptr_number << NL;

    std::cout << "\n #(19:34:02): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
