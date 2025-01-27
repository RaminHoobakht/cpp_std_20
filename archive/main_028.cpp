#include <bitset>
#include <iomanip>
#include <iostream>

#define nl '\n'

int main() {

    constexpr unsigned int COLUM_WIDTH{20};

    unsigned char value1{0x3}; // 0000 0011
    unsigned char value2{0x5}; // 0000 0101

    std::cout << nl;
    std::cout << "bitwise OR: " << nl;

    std::cout << std::setw(COLUM_WIDTH) << "value1 | value2";
    std::cout << std::setw(COLUM_WIDTH) << std::bitset<8>(value1 | value2)
              << nl;

    std::cout << "\n #STD20(16:13:52): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
