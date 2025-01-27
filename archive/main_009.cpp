#include <iomanip>
#include <ios>
#include <iostream>

int main() {

    constexpr long double num1{123456.369258};
    constexpr long double num2{123456.369};

    std::cout << std::setprecision(12);
    std::cout << "num1: " << num1 << '\n';
    std::cout << std::setprecision(9);
    std::cout << "num2: " << num2 << '\n';
    std::cout << "---------------------------\n";
    std::cout << std::scientific;
    std::cout << std::setprecision(12);
    std::cout << "num1: " << num1 << '\n';
    std::cout << std::setprecision(9);
    std::cout << "num2: " << num2 << '\n';

    std::cout << "\n #STD20(17:39:44): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
