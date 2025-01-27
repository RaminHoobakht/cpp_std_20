/* bit mask: toggling bit ^= (mask)  */
#include <bitset>
#include <iomanip>
#include <iostream>

#define nl '\n'

int main() {

    constexpr unsigned char fix_data{0b11011011};
    unsigned char data{fix_data};
    constexpr unsigned char bit_masks[]{0b00000001, 0b00000010, 0b00000100,
                                        0b00001000, 0b00010000, 0b00100000,
                                        0b01000000, 0b10000000};
    constexpr int width{25};
    constexpr int four{4};
    constexpr size_t min{0llu};
    constexpr size_t bit_size{8llu};

    /* -------------- */

    std::cout << nl;
    std::cout << std::setw(width + four) << "raw data for check: ";
    std::cout << std::setw(width) << std::bitset<bit_size>(data);
    std::cout << nl;

    /* -------------- */

    for (size_t i{min}; i < bit_size; ++i) {
        data ^= bit_masks[i];
        std::cout << std::setw(width) << "bit mask " << i << " : ";
        std::cout << std::setw(width) << std::bitset<bit_size>(data);
        std::cout << nl;
        data = fix_data;
    }

    std::cout << "\n #STD20(10:54:09): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
