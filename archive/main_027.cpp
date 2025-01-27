#include <bitset>
#include <iomanip>
#include <iostream>

#define nl '\n'

int main() {

    const int COLUMN_WIDTH{20};
    unsigned char value1{0x5u};
    unsigned char value2{0x3u};

    std::cout << std::setw(COLUMN_WIDTH)
              << "value1:" << static_cast<int>(value1);
    std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1);
    std::cout << nl;

    std::cout << std::setw(COLUMN_WIDTH)
              << "value2:" << static_cast<int>(value2);
    std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(value2);
    std::cout << nl;

    std::cout << "bitwise AND:" << nl;
    std::cout << "value1 & value2: " << std::setw(COLUMN_WIDTH);
    std::cout << std::bitset<8>(value1 & value2) << nl;

    std::cout << "\n #STD20(15:49:08): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
