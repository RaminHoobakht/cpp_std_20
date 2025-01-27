#include <cmath>
#include <iostream>

int main() {

    std::double_t val{64};

    std::double_t result{std::sqrt(val)};

    std::cout << "value of result is: " << result << '\n';

    std::cout << "\n #STD20(21:29:44): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
