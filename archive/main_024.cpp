#include <iostream>

#define nl '\n'

int main() {

    unsigned char char_val{55};
    unsigned char val1{130};
    unsigned char val2{131};

    /* underflow */
    char_val = val1 - val2;

    std::cout << "result of char_val is: " << char_val << nl;
    std::cout << "size of char_val is: " << sizeof(char_val) << nl;
    std::cout << "after cast to unsigned char: "
              << static_cast<unsigned char>(char_val) << nl;
    std::cout << "after cast to int: " << static_cast<int>(char_val) << nl;


    std::cout << "\n #STD20(11:02:26): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
