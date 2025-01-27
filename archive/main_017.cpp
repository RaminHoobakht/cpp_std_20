#include <cmath>
#include <iostream>

int main() {

    std::double_t result1{std::round(3.654)};
    std::double_t result2{std::round(2.5)};
    std::double_t result3{std::round(2.4)};

    std::double_t result11{std::ceil(3.654)};
    std::double_t result21{std::ceil(2.5)};
    std::double_t result31{std::ceil(2.4)};

    std::cout << "value of result one  : " << result1 << '\n';
    std::cout << "value of result two  : " << result2 << '\n';
    std::cout << "value of result three: " << result3 << '\n';
    std::cout << "--------------------------------------------\n";
    std::cout << "value of result one1  : " << result11 << '\n';
    std::cout << "value of result two1  : " << result21 << '\n';
    std::cout << "value of result three1: " << result31 << '\n';


    std::cout << "\n #STD20(21:32:25): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
