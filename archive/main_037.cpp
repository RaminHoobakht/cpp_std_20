/* bit mask: reset bit position(s) &= (~mask)*/
#include <bitset>
#include <iomanip>
#include <iostream>

#define nl '\n'

int main() {

    constexpr unsigned char bit_masks[]{0b00000001, 0b00000010, 0b00000100,
                                        0b00001000, 0b00010000, 0b00100000,
                                        0b01000000, 0b10000000};

    constexpr unsigned char fix_data{0b11111111};
    unsigned char data{fix_data};
    constexpr int bit_size{8};
    constexpr int width_size{15};
    constexpr size_t zero{0llu};
    constexpr size_t four{4llu};
    constexpr size_t eight{8llu};

    /* ---------------- */

    std::cout << nl;
    std::cout << std::setw(width_size + four) << "row data: ";
    std::cout << std::setw(width_size) << std::bitset<bit_size>(data) << nl;

    /* ---------------- */

    for (size_t i{zero}; i < eight; ++i) {
        data &= (~bit_masks[i]);
        std::cout << std::setw(width_size) << "bit mask " << i << " : ";
        std::cout << std::setw(width_size) << std::bitset<bit_size>(data) << nl;
        data = fix_data;
    }

    /* ---------------- */


    std::cout << "\n #STD20(07:54:33): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
