#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>

int main() {

    const std::double_t result1{std::pow(5, 13)};
    const std::double_t result2{std::pow(7, 12)};

    std::cout << std::fixed;
    std::cout << std::setprecision(0);
    std::cout << "result one is: " << result1 << '\n';
    std::cout << "result two is: " << result2 << '\n';

    std::cout << "\n #STD20(19:04:14): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
