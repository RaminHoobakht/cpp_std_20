/* restrict of change data of the pointer variable */


#include <iostream>

#define nl '\n'

int main() {

    int number_1{120};
    int number_2{400};
    int const *number_ptr{reinterpret_cast<const int *>(&number_1)};

    std::cout << "value of number_1 is: " << number_1 << nl;
    std::cout << "value of *number_ptr is: " << *number_ptr << nl;
    std::cout << "--------------------------------------" << nl;

    number_1 = 220;

    std::cout << "value of numbr_1 is: " << number_1 << nl;
    std::cout << "value of *number_ptr is: " << *number_ptr << nl;
    std::cout << "--------------------------------------" << nl;

    /* encounter with error. because *number_ptr data definition 
       is restricted with const keyword */
    // *number_ptr = 320;

    number_ptr = &number_2;

    std::cout << "value of numbr_1 is: " << number_2 << nl;
    std::cout << "value of number_1_ptr is: " << *number_ptr << nl;
    std::cout << "--------------------------------------" << nl;

    number_2 = 500;

    std::cout << "value of numbr_1 is: " << number_2 << nl;
    std::cout << "value of number_1_ptr is: " << *number_ptr << nl;
    std::cout << "--------------------------------------" << nl;

    std::cout << "\n #STD20(12:22:19): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
