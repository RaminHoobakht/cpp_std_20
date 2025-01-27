#include <iostream>


const constinit int x{120};
constinit int y{200};


int main() {

    y = 333;
    std::cout << "value of x is: " << x << '\n';
    std::cout << "value of y is: " << y << '\n';

    std::cout << "\n #STD20(19:58:21): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
