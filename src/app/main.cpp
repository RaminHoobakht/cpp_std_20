/* implicit conversoin */

#include <iostream>
#include "../header/utillib.hpp"

void print_out(int &num) noexcept(true);

int main() {

    double number{12036};

    print_out(number);

    std::cout << "\n #(20:31:24): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

void print_out(int &num) noexcept(true) {
    ++num;
    std::cout << "value on input number is: " << num << NL;
}
