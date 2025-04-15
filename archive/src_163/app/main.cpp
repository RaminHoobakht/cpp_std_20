/* function overloading */

#include <iostream>
#include <string_view>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

namespace cpp {

    int max(int a, int b) noexcept;
    double max(double a, double b) noexcept;
    std::string_view max(std::string_view a, std::string_view b) noexcept;

    int max(int a, int b) noexcept {
        out << "int max(int, int) was invoked: " << NL;
        return (a > b) ? a : b;
    }

    double max(double a, double b) noexcept {
        out << "int max(int, int) was invoked: " << NL;
        return (a > b) ? a : b;
    }

    std::string_view max(std::string_view a, std::string_view b) noexcept {
        out << "std::string_view madx(std::string_view, std::string_view) "
               "was invoked: "
            << NL;
        return (a > b) ? a : b;
    }


} // namespace cpp


int main() {

    const int int_x{120};
    const int int_y{220};

    const double double_x{120.98};
    const double double_y{220.96};

    std::string_view sv_x{"I am C Developer ..."};
    std::string_view sv_y{"I am C++ Developer ..."};


    int result_int{cpp::max(int_x, int_y)};
    double result_double{cpp::max(double_x, double_y)};
    std::string_view result_sv{cpp::max(sv_x, sv_y)};

    SEP;
    out << "value of result_int   : " << result_int << NL;
    out << "value of result_double: " << result_double << NL;
    out << "value of result_sv    : " << result_sv << NL;


    std::cout << "\n #(14:01:51): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
