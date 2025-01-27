/* Bit Mask: setting bit position |= (mask)*/
#include <bitset>
#include <iomanip>
#include <iostream>

#define nl '\n'

int main() {

    constexpr unsigned char bit_masks[8]{0b00000001, 0b00000010, 0b00000100,
                                         0b00001000, 0b00010000, 0b00100000,
                                         0b01000000, 0b10000000};
    constexpr unsigned char bit_size{8};
    constexpr unsigned char width_size{20};
    constexpr unsigned char fix{0b00000000};
    unsigned char data{fix};

    /* ---------------- */

    std::cout << nl;
    std::cout << std::setw(width_size + 4) << "value of data   : ";
    std::cout << std::setw(width_size) << std::bitset<bit_size>(data);
    std::cout << nl;

    /* ---------------- */

    for (size_t i{0LLU}; i < 7LLU; ++i) {
        data |= bit_masks[i];
        std::cout << std::setw(width_size) << "set bit position " << i << " : ";
        std::cout << std::setw(width_size) << std::bitset<bit_size>(data);
        std::cout << nl;
        data = fix;
    }

    /* ---------------- */

    std::cout << "\n #STD20(19:13:44): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
