#include <ios>
#include <iostream>
#include <limits>

int main() {

    std::cout << "minimum of short: " << std::numeric_limits<short>::min()
              << '\n';
    std::cout << std::showpos;
    std::cout << "maximum of short: " << std::numeric_limits<short>::max()
              << '\n';

    std::cout << "\n #STD20(17:53:17): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
