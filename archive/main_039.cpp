#include <bitset>
#include <cstddef>
#include <iomanip>
#include <iostream>

#define nl '\n'

int main() {

    constexpr unsigned char bit_masks[8]{0b00000001, 0b00000010, 0b00000100,
                                         0b00001000, 0b00010000, 0b00100000,
                                         0b01000000, 0b10000000};

    constexpr unsigned char fix_data{0b01011010};
    constexpr std::size_t zero{0llu};
    constexpr std::size_t eight{8llu};
    constexpr std::size_t four{4llu};
    constexpr int width{25};
    unsigned char data{fix_data};

    /* ---------------- */

    std::cout << nl;
    std::cout << std::setw(width + four) << "row data for check state:";
    std::cout << std::setw(width) << std::bitset<eight>(data);
    std::cout << nl;

    /* ---------------- */

    for (size_t i{zero}; i < eight; ++i) {
        data &= bit_masks[i];
        data >>= i;
        std::cout << std::setw(width) << "bit mask " << i << " : ";
        std::cout << std::setw(width) << std::bitset<eight>(data);
        std::cout << nl;
        data = fix_data;
    }

    std::cout << "\n #STD20(02:27:25): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
