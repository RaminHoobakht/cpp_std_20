#include <cmath>
#include <iostream>

int main() {

    constexpr double weight{7.7};

    /* no round is occur. */
    std::cout << "value of weight is: " << weight << '\n';
    std::cout << "-------------------------------------------\n";

    /* round to down */
    std::cout << "weight rounded to floor is: " << std::floor(weight) << '\n';
    std::cout << "-------------------------------------------\n";

    /* round to up */
    std::cout << "weight rounded to ceil is: " << std::ceil(weight) << '\n';

    std::cout << "\n #STD20(18:32:37): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
