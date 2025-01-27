#include <bitset>
#include <ios>
#include <iostream>

#define nl '\n'

int main() {

    unsigned short int data{0b11111110};

    std::cout << "data (dec)" << std::dec << data << nl;
    std::cout << "data (hex)" << std::hex << std::showbase << data << nl;
    std::cout << "data (bin)" << std::bitset<sizeof(data) * 8>(data) << nl;

    std::cout << "\n #STD20(11:20:47): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
