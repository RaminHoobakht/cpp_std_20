#include <iostream>


int main() {

    constexpr double price{123.456};
    constexpr unsigned unit{10};
    constexpr double total_price{price * unit};

    std::cout << "total price is: " << total_price << '\n';
    std::cout << "size of total price is: " << sizeof(total_price) << '\n';


    std::cout << "\n #STD20(07:59:27): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
