/* using enum class */

#include <iostream>
#include "../header/utillib.hpp"


int main() {

    enum class month {
        Jan = 1,
        Feb,
        Mar,
        Apr,
        May,
        Jun,
        Jul,
        Agu = 18,
        Sep,
        Oct,
        Nov,
        Dec
    };

    month my_month{month::Jan};
    std::cout << "my_month is: " << static_cast<int>(my_month) << NL;

    std::cout << "value of Agu: " << static_cast<int>(month::Agu) << NL;
    std::cout << "value of Sep: " << static_cast<int>(month::Sep) << NL;


    std::cout << "\n #(03:04:51): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
