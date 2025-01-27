#include <bitset>
#include <iomanip>
#include <iostream>

#define nl '\n'

int main() {

    constexpr unsigned char four{4};
    constexpr unsigned char bit_size{8};
    constexpr unsigned char width_size{12};
    constexpr unsigned char fix_data{0b00000000};

    constexpr unsigned char bit_masks[8]{0b00000001, 0b00000010, 0b00000100,
                                         0b00001000, 0b00010000, 0b00100000,
                                         0b01000000, 0b10000000};

    unsigned char data{fix_data};

    /* -------------- */

    std::cout << nl;
    std::cout << std::setw(width_size + four) << "row data: ";
    std::cout << std::setw(width_size) << std::bitset<bit_size>(data);
    std::cout << nl;

    /* -------------- */

    for (size_t i{0}; i < 8; ++i) {
        data |= bit_masks[i];
        std::cout << std::setw(width_size) << "bit mask " << i << " : ";
        std::cout << std::setw(width_size) << std::bitset<bit_size>(data);
        std::cout << nl;
        data = fix_data;
    }

    /* -------------- */

    std::cout << "\n #STD20(07:21:18): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
