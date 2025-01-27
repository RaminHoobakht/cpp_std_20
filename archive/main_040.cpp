/* bit mask: set bit |= (mask) */
#include <bitset>
#include <iomanip>
#include <iostream>

#define nl '\n'

int main() {

    constexpr unsigned char fix_data{0b00000000};
    unsigned char data{fix_data};
    constexpr unsigned char bit_masks[]{0b00000001, 0b00000010, 0b00000100,
                                        0b00001000, 0b00010000, 0b00100000,
                                        0b01000001, 0b10000000};
    constexpr int width{25};
    constexpr int margin{4};
    constexpr std::size_t min{0llu};
    constexpr std::size_t bit_size{8llu};

    /* ------------------- */

    std::cout << nl;
    std::cout << std::setw(width + margin) << "row bits data: ";
    std::cout << std::setw(width) << std::bitset<bit_size>(data);
    std::cout << nl;

    /* ------------------- */
    
    for(std::size_t i{min}; i < bit_size; ++i) {
        data |= bit_masks[i];
        std::cout << std::setw(width) << "bit mask " << i << " : ";
        std::cout << std::setw(width) << std::bitset<bit_size>(data);
        std::cout << nl;
        data = fix_data;
    }

    /* ------------------- */
    
    std::cout << "\n #STD20(06:21:09): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
