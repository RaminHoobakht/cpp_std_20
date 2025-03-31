/*  */

#include <iostream>
#include "../header/utillib.hpp"


int main() {

    enum class Month {
        Jan = 1,
        January = Jan,
        Feb,
        February = Feb,
        Mar,
        March = Mar,
        Apr = 4,
        April = Apr,
        May = 5,
        Jun = 6,
        June = Jun,
        Jul = 7,
        July = Jul,
        Aug = 8,
        August = Aug,
        Sep = 9,
        September = Sep,
        Oct = 10,
        October = Oct,
        Nov = 11,
        November = Nov,
        Dec = 12,
        December = Dec
    };

    enum class Month1 : int {
        Jan = 1,
        January = Jan,
        Feb,
        February = Feb,
        Mar,
        March = Mar,
        Apr = 4,
        April = Apr,
        May = 5,
        Jun = 6,
        June = Jun,
        Jul = 7,
        July = Jul,
        Aug = 8,
        August = Aug,
        Sep = 9,
        September = Sep,
        Oct = 10,
        October = Oct,
        Nov = 11,
        November = Nov,
        Dec = 12,
        December = Dec
    };


    enum class Month2 : unsigned char {
        Jan = 1,
        January = Jan,
        Feb,
        February = Feb,
        Mar,
        March = Mar,
        Apr = 4,
        April = Apr,
        May = 5,
        Jun = 6,
        June = Jun,
        Jul = 7,
        July = Jul,
        Aug = 8,
        August = Aug,
        Sep = 9,
        September = Sep,
        Oct = 10,
        October = Oct,
        Nov = 11,
        November = Nov,
        Dec = 12,
        December = Dec
    };

    Month month{Month::August};
    std::cout << "value of August is: " << static_cast<int>(month) << NL;


    std::cout << "\n #(15:07:35): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
