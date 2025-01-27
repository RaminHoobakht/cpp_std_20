#include <iostream>

#define nl '\n'

int main() {

    double x{5};
    double y{10};
    int z{static_cast<int>(x + y)};

    std::cout << "value of z is: " << z << nl;
    std::cout << "size of z is: " << sizeof(z) << nl;


    std::cout << "\n #STD20(10:55:01): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
