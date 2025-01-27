#include <bitset>
#include <iomanip>
#include <iostream>

#define nl '\n'

int main() {

    constexpr unsigned char width_size{23};
    constexpr unsigned char bit_size{8};

    constexpr unsigned char fix{0b00000000};
    unsigned char data{0b00000000};

    constexpr unsigned char bit_mask_0{0b00000001};
    constexpr unsigned char bit_mask_1{0b00000010};
    constexpr unsigned char bit_mask_2{0b00000100};
    constexpr unsigned char bit_mask_3{0b00001000};
    constexpr unsigned char bit_mask_4{0b00010000};
    constexpr unsigned char bit_mask_5{0b00100000};
    constexpr unsigned char bit_mask_6{0b01000000};
    constexpr unsigned char bit_mask_7{0b10000000};

    /* ----------- */
    std::cout << nl;
    std::cout << std::setw(width_size) << "value of var: ";
    std::cout << std::setw(width_size) << std::bitset<bit_size>(data);
    std::cout << nl;

    /* ----------- */
    data |= (bit_mask_1 | bit_mask_3 | bit_mask_5 | bit_mask_7);
    std::cout << std::setw(width_size) << "reset data (bit 0): ";
    std::cout << std::setw(width_size);
    std::cout << std::bitset<bit_size>(data);
    std::cout << nl;
    data = fix;

    /* ----------- */
    data |= (bit_mask_0 | bit_mask_2 | bit_mask_4 | bit_mask_6);
    std::cout << std::setw(width_size) << "reset data (bit 0): ";
    std::cout << std::setw(width_size);
    std::cout << std::bitset<bit_size>(data);
    std::cout << nl;
    data = fix;


    std::cout << "\n #STD20(18:34:40): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
