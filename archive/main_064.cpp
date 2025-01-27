#include <iostream>

#define nl '\n'

int main() {

    int number1{155};
    int const *number_ptr{&number1};
    int * const number_ptr2{&number1};
    int const *const number_ptr3{& number1};

    std::cout << "vaule of number1 is: " << number1 << nl;
    std::cout << "value of *number_ptr is: " << *number_ptr << nl;
    std::cout << "value of *number_pt2r is: " << *number_ptr2 << nl;
    std::cout << "value of *number_ptr3 is: " << *number_ptr3 << nl;

    number1 = 200;

    std::cout << "vaule of number1 is: " << number1 << nl;
    std::cout << "value of *number_ptr is: " << *number_ptr << nl;
    std::cout << "value of *number_pt2r is: " << *number_ptr2 << nl;
    std::cout << "value of *number_ptr3 is: " << *number_ptr3 << nl;


    std::cout << "\n #STD20(14:46:50): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
