#include <bitset>
#include <iostream>

#define nl '\n'

int main() {

    unsigned short int value{0xff0u};

    std::cout << "value in binary : " << std::bitset<16>(value) << nl;
    std::cout << "value in decimal: " << std::dec << value << nl;
    std::cout << nl;

    std::cout << "shifting right one bit >> " << nl;
    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "value in binary : " << std::bitset<16>(value) << nl;
    std::cout << "value in decimal: " << std::dec << value << nl;


    std::cout << "\n #STD20(12:38:06): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
