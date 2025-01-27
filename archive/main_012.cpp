#include <cmath>
#include <cstdlib>
#include <iostream>


int main() {

    std::double_t saving{-5000.0};
    std::double_t weight{7.7};

    std::cout << "origin of weight is: " << weight << '\n';
    std::cout << "origin of saving is: " << saving << '\n';
    std::cout << "-----------------------------------------------\n";
    std::cout << "Abs of weight is: " << std::abs(weight) << '\n';
    std::cout << "Abs of saving is: " << std::abs(saving) << '\n';


    std::cout << "\n #STD20(18:43:14): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
