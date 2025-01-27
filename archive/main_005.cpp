#include <ios>
#include <iostream>


int main() {

    constexpr int pos_num{34};
    constexpr int neg_num{-45};

    std::cout << "pos_num: " << pos_num << '\n';
    std::cout << "neg_num: " << neg_num << '\n';
    std::cout << "------------------------------------\n";

    std::cout << std::showpos;
    std::cout << "pos_num: " << pos_num << '\n';
    std::cout << "neg_num: " << neg_num << '\n';
    std::cout << "------------------------------------\n";

    std::cout << std::noshowpos;
    std::cout << "pos_num: " << pos_num << '\n';
    std::cout << "neg_num: " << neg_num << '\n';
    std::cout << "------------------------------------\n";


    std::cout << "\n #STD20(12:25:53): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
