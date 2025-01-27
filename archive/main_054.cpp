#include <iostream>

#define nl '\n'

int main() {

    int *int_pointer{nullptr};
    double *double_pointer{nullptr};

    std::cout << "size of int is: " << sizeof(int) << nl;
    std::cout << "size of double is: " << sizeof(double) << nl;

    std::cout << "-----------------------------" << nl;

    std::cout << "size of int_pointer is: " << sizeof(int_pointer) << nl;
    std::cout << "size of double_pointer is: " << sizeof(double_pointer) << nl;

    std::cout << "\n #STD20(23:12:40): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
