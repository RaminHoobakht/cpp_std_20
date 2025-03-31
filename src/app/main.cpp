/* using enumeration */

#include <iostream>
#include <string_view>
#include "../header/utillib.hpp"

enum class Month {
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec,
};

std::string_view get_month_name1(Month month) noexcept;
std::string_view get_month_name2(Month month) noexcept;

int main() {


    Month my_month1{Month::Jan};
    Month my_month2{Month::Jun};

    std::string_view result1{get_month_name1(my_month1)};
    std::string_view result2{get_month_name2(my_month2)};

    std::cout << "value of month one is: " << result1 << NL;
    std::cout << "value of month two is: " << result2 << NL;

    std::cout << "\n #(15:27:49): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

std::string_view get_month_name1(Month month) noexcept {

    switch (month) {
        case Month::Jan:
            return "January";
        case Month::Feb:
            return "February";
        case Month::Mar:
            return "March";
        case Month::Apr:
            return "April";
        case Month::May:
            return "May";
        case Month::Jun:
            return "June";
        case Month::Jul:
            return "July";
        case Month::Aug:
            return "August";
        case Month::Sep:
            return "September";
        case Month::Oct:
            return "October";
        case Month::Nov:
            return "November";
        case Month::Dec:
            return "December";
        default:
            return "None";
    }
}


std::string_view get_month_name2(Month month) noexcept {

    using enum Month;
    switch (month) {
        case Jan:
            return "January";
        case Feb:
            return "February";
        case Mar:
            return "March";
        case Apr:
            return "April";
        case May:
            return "May";
        case Jun:
            return "June";
        case Jul:
            return "July";
        case Aug:
            return "August";
        case Sep:
            return "September";
        case Oct:
            return "October";
        case Nov:
            return "November";
        case Dec:
            return "December";
        default:
            return "None";
    }
}
