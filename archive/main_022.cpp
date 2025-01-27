#include <iostream>

#define nl '\n';

int main() {

    unsigned int x{};
    double y{123.456};

    x = static_cast<unsigned int>(y);

    std::cout << "value of x is: " << x << nl;
    std::cout << "value of y is: " << y << nl;

    std::cout << "size of x is: " << sizeof(x) << nl;
    std::cout << "size of y is: " << sizeof(y) << nl;


    std::cout << "\n #STD20(10:50:34): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
