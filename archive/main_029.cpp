#include <bitset>
#include <iomanip>
#include <iostream>

#define nl '\n'

int main() {

    constexpr unsigned int COLUM_WIDTH{20};

    unsigned char value1{0x3}; // 0000 0011
    unsigned char value2{0x5}; // 0000 0101

    std::cout << std::setw(COLUM_WIDTH) << "~value1";
    std::cout << std::setw(COLUM_WIDTH) << std::bitset<8>(~value1);
    std::cout << nl;

    std::cout << std::setw(COLUM_WIDTH) << "~value2";
    std::cout << std::setw(COLUM_WIDTH) << std::bitset<8>(~value2);
    std::cout << nl;

    unsigned char value3{0b01011001};
    std::cout << std::setw(COLUM_WIDTH) << "value3: ~0b01011001";
    std::cout << std::setw(COLUM_WIDTH) << std::bitset<8>(~value3);
    std::cout << nl;

    unsigned char value4{0x59};
    std::cout << std::setw(COLUM_WIDTH) << "value4: ~0x59";
    std::cout << std::setw(COLUM_WIDTH) << std::bitset<8>(~value4);
    std::cout << nl;

    std::cout << "\n #STD20(16:23:43): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
