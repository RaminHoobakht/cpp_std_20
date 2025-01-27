#include <bitset>
#include <iomanip>
#include <iostream>

#define nl '\n'

int main() {

    unsigned char var{0b00000000};
    constexpr unsigned char zero{0};
    constexpr unsigned char bit_size{8};
    constexpr unsigned char width_size{21};
    constexpr unsigned char mask_bit_0{0b00000001};
    constexpr unsigned char mask_bit_1{0b00000010};
    constexpr unsigned char mask_bit_2{0b00000100};
    constexpr unsigned char mask_bit_3{0b00001000};
    constexpr unsigned char mask_bit_4{0b00010000};
    constexpr unsigned char mask_bit_5{0b00100000};
    constexpr unsigned char mask_bit_6{0b01000000};
    constexpr unsigned char mask_bit_7{0b10000000};

    /* --------------- */
    std::cout << std::setw(width_size) << "before operation: ";
    std::cout << std::setw(width_size) << std::bitset<bit_size>(var) << nl;
    var = zero;

    /* --------------- */
    var |= mask_bit_0;
    std::cout << std::setw(width_size) << "after mask bit 0: ";
    std::cout << std::setw(width_size) << std::bitset<bit_size>(var) << nl;
    var = zero;

    /* --------------- */
    var |= mask_bit_1;
    std::cout << std::setw(width_size) << "after mask bit 1: ";
    std::cout << std::setw(width_size) << std::bitset<bit_size>(var) << nl;
    var = zero;

    /* --------------- */
    var |= mask_bit_2;
    std::cout << std::setw(width_size) << "after mask bit 2: ";
    std::cout << std::setw(width_size) << std::bitset<bit_size>(var) << nl;
    var = zero;

    /* --------------- */
    var |= mask_bit_3;
    std::cout << std::setw(width_size) << "after mask bit 3: ";
    std::cout << std::setw(width_size) << std::bitset<bit_size>(var) << nl;
    var = zero;

    /* --------------- */
    var |= mask_bit_4;
    std::cout << std::setw(width_size) << "after mask bit 4: ";
    std::cout << std::setw(width_size) << std::bitset<bit_size>(var) << nl;
    var = zero;

    /* --------------- */
    var |= mask_bit_5;
    std::cout << std::setw(width_size) << "after mask bit 5: ";
    std::cout << std::setw(width_size) << std::bitset<bit_size>(var) << nl;
    var = zero;

    /* --------------- */
    var |= mask_bit_6;
    std::cout << std::setw(width_size) << "after mask bit 6: ";
    std::cout << std::setw(width_size) << std::bitset<bit_size>(var) << nl;
    var = zero;

    /* --------------- */
    var |= mask_bit_7;
    std::cout << std::setw(width_size) << "after mask bit 7: ";
    std::cout << std::setw(width_size) << std::bitset<bit_size>(var) << nl;
    var = zero;


    std::cout << "\n #STD20(16:35:50): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
