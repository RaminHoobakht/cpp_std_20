#include <iomanip>
#include <ios>
#include <iostream>


int main() {

    constexpr int pos_int{717171};
    constexpr int neg_int{-47347};
    constexpr double double_var{498.32};

    std::cout << "post_int in different bases: \n";
    std::cout << std::showbase;
    std::cout << std::uppercase;
    std::cout << "pos_int (doc): " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex): " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct): " << std::oct << pos_int << std::endl;
    std::cout << "----------------------------------------------------\n";

    std::cout << std::showbase;
    std::cout << std::uppercase;
    std::cout << "neg_int in different bases: \n";
    std::cout << "neg_int (doc): " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex): " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct): " << std::oct << neg_int << std::endl;
    std::cout << "----------------------------------------------------\n";

    std::cout << std::showbase;
    std::cout << std::uppercase;
    std::cout << "neg_int in different bases: \n";
    std::cout << "neg_int (doc): " << std::dec << double_var << std::endl;
    std::cout << "neg_int (hex): " << std::hex << double_var << std::endl;
    std::cout << "neg_int (oct): " << std::oct << double_var << std::endl;
    std::cout << "----------------------------------------------------\n";

    std::cout << "\n #STD20(12:52:51): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
