#include <ios>
#include <iostream>


int main() {

    constexpr double d{34.1};
    constexpr double e{101.99};
    constexpr double f{12.0};
    constexpr int g{45};

    std::cout << "no show point: " << '\n';
    std::cout << std::noshowpoint;
    std::cout << "d: " << d << '\n';
    std::cout << "e: " << e << '\n';
    std::cout << "f: " << f << '\n';
    std::cout << "g: " << g << '\n';
    std::cout << "------------------------------------------\n";

    std::cout << "show point: " << '\n';
    std::cout << std::showpoint;
    std::cout << "d: " << d << '\n';
    std::cout << "e: " << e << '\n';
    std::cout << "f: " << f << '\n';
    std::cout << "g: " << g << '\n';
    std::cout << "------------------------------------------\n";


    std::cout << "\n #STD20(13:31:57): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
