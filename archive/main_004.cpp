#include <iomanip>
#include <ios>
#include <iostream>

int main() {

    constexpr bool positive_condition{true};
    constexpr bool negative_condition{false};

    std::cout << std::boolalpha;
    std::cout << "positive condition: " << positive_condition << '\n';
    std::cout << "negative condition: " << negative_condition << '\n';
    std::cout << "---------------------------------------------\n";
    std::cout << std::noboolalpha;
    std::cout << "positive condition: " << positive_condition << '\n';
    std::cout << "negative condition: " << negative_condition << '\n';


    std::cout << "\n #STD20(12:18:58): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
