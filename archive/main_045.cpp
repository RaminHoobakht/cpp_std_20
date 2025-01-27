/* a goodg example for using mask */
#include <iostream>

#define nl '\n'

constexpr unsigned char bit_masks[]{0b00000001, 0b00000010, 0b00000100,
                                    0b00001000, 0b00010000, 0b00100000,
                                    0b01000001, 0b10000000};

void use_option_v0(bool flag0, bool flag1, bool flag2, bool flag3, bool flag4,
                   bool flag5, bool flag6, bool flag7) noexcept;

void use_option_v1(unsigned char flags) noexcept;


int main() {

    use_option_v0(false, false, true, true, true, false, true, false);
    std::cout << "---------------------------------------------------------\n";
    use_option_v1(0b01111100);
    std::cout << "---------------------------------------------------------\n";
    use_option_v1(bit_masks[3] | bit_masks[5] | bit_masks[7]);

    std::cout << "\n #STD20(19:22:44): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

void use_option_v0(bool flag0, bool flag1, bool flag2, bool flag3, bool flag4,
                   bool flag5, bool flag6, bool flag7) noexcept {

    std::cout << "flag0 is: " << flag0 << " do something with it." << nl;
    std::cout << "flag1 is: " << flag1 << " do something with it." << nl;
    std::cout << "flag2 is: " << flag2 << " do something with it." << nl;
    std::cout << "flag3 is: " << flag3 << " do something with it." << nl;
    std::cout << "flag4 is: " << flag4 << " do something with it." << nl;
    std::cout << "flag5 is: " << flag5 << " do something with it." << nl;
    std::cout << "flag6 is: " << flag6 << " do something with it." << nl;
    std::cout << "flag7 is: " << flag7 << " do something with it." << nl;
}

void use_option_v1(unsigned char flags) noexcept {

    std::cout << "flag0 is: " << ((flags & bit_masks[0]) >> 0)
              << " do something with it." << nl;
    std::cout << "flag1 is: " << ((flags & bit_masks[1]) >> 1)
              << " do something with it." << nl;
    std::cout << "flag2 is: " << ((flags & bit_masks[2]) >> 2)
              << " do something with it." << nl;
    std::cout << "flag3 is: " << ((flags & bit_masks[3]) >> 3)
              << " do something with it." << nl;
    std::cout << "flag4 is: " << ((flags & bit_masks[4]) >> 4)
              << " do something with it." << nl;
    std::cout << "flag5 is: " << ((flags & bit_masks[5]) >> 5)
              << " do something with it." << nl;
    std::cout << "flag6 is: " << ((flags & bit_masks[6]) >> 6)
              << " do something with it." << nl;
    std::cout << "flag7 is: " << ((flags & bit_masks[7]) >> 7)
              << " do something with it." << nl;
}
