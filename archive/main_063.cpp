#include <iostream>

#define nl '\n'

int main() {

    int const number1{155};

    /* whene a normal varibale is const, the pointer variable 
     * that point it, should be const. except occure a compile time error. 
     * below line encountred with compile time error. */
    // int *number_ptr{&number1};

    int const *number_ptr{&number1};

    std::cout << "address of the number_ptr is: " << number_ptr << nl;
    std::cout << "value of the number_ptr is: " << *number_ptr << nl;

    std::cout << "\n #STD20(13:46:53): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
