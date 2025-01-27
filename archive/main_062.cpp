#include <iostream>

#define nl '\n'

int main() {

    int number_1{120};
    int number_2{220};

    int *const number_ptr{&number_1};
    std::cout << "value of *number_ptr is: " << *number_ptr << nl;
    std::cout << "----------------------------------------" << nl;

    *number_ptr = 600;
    std::cout << "value of *number_ptr is: " << *number_ptr << nl;
    std::cout << "----------------------------------------" << nl;

    /* encounter with compile time error. because reference change 
       was restricted by const keyword, (after star). */
    number_ptr = &number_2;
    std::cout << "value of *number_ptr is: " << *number_ptr << nl;
    std::cout << "----------------------------------------" << nl;


    std::cout << "\n #STD20(13:14:59): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
