/* using enumeration class */

#include <iostream>
#include "../header/utillib.hpp"


int main() {

    enum class Month {
        Jan = 1,
        January = 1,
        Feb = 2,
        February = 2,
        Mar = 3,
        March = 3,
        Apr = 4,
        April = 4,
        May = 5,
        June = 6,
        Jun = 6,
        Jul = 7,
        July = 7,
        Aug = 8,
        August = 8,
        Sep = 9,
        September = 9,
        Oct = 10,
        October = 10,
        Nov = 11,
        November = 11,
        Dec = 12,
        December = 12
    };

    Month month{Month::September};
    std::cout << "value of a month is: " << static_cast<int>(month) << NL;


    std::cout << "\n #(14:58:05): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
