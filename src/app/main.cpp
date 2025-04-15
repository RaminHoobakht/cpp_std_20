/*  */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout << SP
#define log std::clog << SP
#define err std::cerr << SP

namespace cpp {

    int max(int *a, int *b) noexcept;
    int max(const int *a, const int *b) noexcept;

    int max(int *a, int *b) noexcept {
        out << "int max(int *, int *) was invoked: " << NL;
        return (*a > *b) ? *a : *b;
    }

    int max(const int *a, const int *b) noexcept {
        out << "int max(const int *, const int *) was invoked: " << NL;
        return (*a > *b) ? *a : *b;
    }


} // namespace cpp


int main() {

    LF;

    int x1{25};
    int y1{36};

    const int x2{74};
    const int y2{96};

    auto result1{cpp::max(&x1, &y1)};
    out << "value of result one is: " << result1 << NL;

    LF_SEP_LF;

    auto result2{cpp::max(&x2, &y2)};
    out << "value of result two is: " << result2 << NL;

    LF_SEP_LF;

    std::cout << "\n #(02:50:02): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
