#include <iomanip>
#include <ios>
#include <iostream>

int main() {

    std::cout << std::endl;
    std::cout << "internal justified: " << std::endl;
    std::cout << std::right;
    std::cout << "std::right\n";
    std::cout << std::setw(10) << -123.45 << std::endl;

    std::cout << "--------------------------" << std::endl;

    std::cout << std::internal;
    std::cout << "std::internal\n";
    std::cout << ::std::setw(10) << -123.45 << std::endl;


    std::cout << "\n #(11:49:51): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
