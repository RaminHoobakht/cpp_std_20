#include <bitset>
#include <iomanip>
#include <iostream>

#define nl '\n'

int main() {


    constexpr unsigned char fix_data{0b01010101};
    unsigned char data{fix_data};
    constexpr unsigned char bit_masks[]{0b00000001, 0b00000010, 0b00000100,
                                        0b00001000, 0b00010000, 0b00100000,
                                        0b01000001, 0b10000000};
    constexpr int width_size{25};
    constexpr size_t zero{0llu};
    constexpr size_t eight{8llu};

    std::cout << std::setw(width_size + 4) << "fix data to check state: ";
    std::cout << std::setw(width_size) << std::bitset<eight>(fix_data);
    std::cout << nl;

    for (size_t i{zero}; i < eight; ++i) {

        data &= bit_masks[i];
        data >>= i;

        std::cout << std::setw(width_size) << "check state bit mask " << i
                  << " : ";
        std::cout << std::setw(width_size) << std::bitset<eight>(data);
        std::cout << nl;
        data = fix_data;
    }


    std::cout << "\n #STD20(12:54:34): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
