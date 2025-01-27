/* check state of a bit */

#include <bitset>
#include <iomanip>
#include <iostream>

#define nl '\n'

int main() {

    constexpr unsigned char width_size{25};
    constexpr unsigned char bit_size{8};

    constexpr unsigned char fix{0b10101010};
    unsigned char data{fix};

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
    std::cout << std::setw(width_size) << "check state of a bit 0: ";
    std::cout << std::setw(width_size) << ((data & bit_mask_0) >> 0) << nl;
    data = fix;

    /* ----------- */
    std::cout << std::setw(width_size) << "check state of a bit 1: ";
    std::cout << std::setw(width_size) << ((data & bit_mask_1) >> 1) << nl;
    data = fix;

    /* ----------- */
    std::cout << std::setw(width_size) << "check state of a bit 2: ";
    std::cout << std::setw(width_size) << ((data & bit_mask_2) >> 2) << nl;
    data = fix;

    /* ----------- */
    std::cout << std::setw(width_size) << "check state of a bit 3: ";
    std::cout << std::setw(width_size) << ((data & bit_mask_3) >> 3) << nl;
    data = fix;

    /* ----------- */
    std::cout << std::setw(width_size) << "check state of a bit 4: ";
    std::cout << std::setw(width_size) << ((data & bit_mask_4) >> 4) << nl;
    data = fix;

    /* ----------- */
    std::cout << std::setw(width_size) << "check state of a bit 5: ";
    std::cout << std::setw(width_size) << ((data & bit_mask_5) >> 5) << nl;
    data = fix;

    /* ----------- */
    std::cout << std::setw(width_size) << "check state of a bit 6: ";
    std::cout << std::setw(width_size) << ((data & bit_mask_6) >> 6) << nl;
    data = fix;

    /* ----------- */
    std::cout << std::setw(width_size) << "check state of a bit 7: ";
    std::cout << std::setw(width_size) << ((data & bit_mask_7) >> 7) << nl;
    data = fix;


    std::cout << "\n #STD20(18:45:43): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
