/* check pointer to constant variable reference */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout << SP
#define log std::clog << SP
#define err std::cerr << SP

namespace cpp {

    int max1(int *a, int *b) noexcept;
    int max2(const int *a, const int *b) noexcept;
    int max3(const int *a, const int *b) noexcept;

    /* ---------------- */

    int max1(int *a, int *b) noexcept {
        out << "max1(int *a, int *b): " << NL;
        out << "reference of &a is: " << &a << NL;
        out << "reference of &b is: " << &b << NL;
        LF_SEP_LF;
        return (*a > *b) ? *a : *b;
    }

    int max2(const int *a, const int *b) noexcept {
        out << "max2(const int *a, const int *b): " << NL;
        out << "reference of &a is: " << &a << NL;
        out << "reference of &b is: " << &b << NL;
        LF_SEP_LF;
        return (*a > *b) ? *a : *b;
    }

    int max3(const int *const a, const int *const b) noexcept {
        out << "int max3(const int *const a, const int *const b): " << NL;
        out << "reference of &a is: " << &a << NL;
        out << "reference of &b is: " << &b << NL;
        LF_SEP_LF;
        return (*a > *b) ? *a : *b;
    }


} // namespace cpp


int main() {

    LF;

    int x{25};
    int y{14};

    out << "reference of x variable is: " << &x << NL;
    out << "reference of y variable is: " << &y << NL;

    LF_SEP_LF;

    auto result1{cpp::max1(&x, &y)};
    auto result2{cpp::max2(&x, &y)};
    auto result3{cpp::max3(&x, &y)};

    out << "result one: " << result1 << NL;
    out << "result two: " << result2 << NL;
    out << "result three: " << result3 << NL;

    LF_SEP_LF;

    out << "reference of x variable is: " << &x << NL;
    out << "reference of y variable is: " << &y << NL;


    std::cout << "\n #(09:16:35): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
