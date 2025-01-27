#include <iostream>

#define nl '\n'

int main() {

    int int_var{43};
    int *p_int{&int_var};

    std::cout << "value of int_var is: " << int_var << nl;
    std::cout << "address of the p_int in memory is: " << p_int << nl;

    int int_var2{126};
    p_int = &int_var2;

    std::cout << "value of int_var2 is: " << int_var2 << nl;
    std::cout << "value of p_int in memory is: " << p_int << nl;

    std::cout << "\n #STD20(23:18:31): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
