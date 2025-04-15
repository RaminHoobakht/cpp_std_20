/* function overloading */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout << SP
#define log std::clog << SP
#define err std::cerr << SP

namespace cpp {


    double max(double a, double b) noexcept;
    int max(const int &a, const int &b) noexcept;
    /*const int &max(const int &a, const int &b) noexcept;*/

    /* ------------------ */

    double max(const double a, const double b) noexcept {
        out << "double max was invoked: " << NL;
        return (a > b) ? a : b;
    }

    int max(const int &a, const int &b) noexcept {
        out << "int max was invoked: " << NL;
        return (a > b) ? a : b;
    }

    /*const int &max(const int &a, const int &b) noexcept {
        out << "int max was invoked: " << NL;
        return (a > b) ? a : b;
    }*/


} // namespace cpp


int main() {

    LF;

    char x{55};
    char y{63};

    auto result{cpp::max(x, y)};

    out << "value of result is: " << result << NL;

    std::cout << "\n #(01:29:53): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
