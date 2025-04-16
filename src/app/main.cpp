/* function overloading with constant reference */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout << SP
#define log std::clog << SP
#define err std::cerr << SP

namespace cpp {

    int max(int &a, int &b) noexcept;
    int max(const int &a, const int &b) noexcept;

    /* ------------------ */

    int max(int &a, int &b) noexcept {
        out << "int max(int &a, int &b) was invoked: " << NL;
        return (a > b) ? a : b;
    }

    int max(const int &a, const int &b) noexcept {
        out << "int max(const int &a, const int &b) was invoked: " << NL;
        return (a > b) ? a : b;
    }


} // namespace cpp


int main() {

    LF;

    int x1{74};
    int y1{85};

    const int &x2{x1};
    const int &y2{y1};

    auto result1{cpp::max(x1, y1)};
    out << "max: result1: " << result1 << NL;
    LF_SEP_LF;

    auto result2{cpp::max(x2, y2)};
    out << "max: result2: " << result2 << NL;
    LF_SEP_LF;


    std::cout << "\n #(16:03:40): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
