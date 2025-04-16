/* check pointer to constant variable reference */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout << SP
#define log std::clog << SP
#define err std::cerr << SP

namespace cpp {

    int max1(int *a, int *b) noexcept;
    int max2(const int *a, const int *b) noexcept;
    int max3(const int *const a, const int *const b) noexcept;

    /* ---------------- */

    int max1(int *a, int *b) noexcept {
        out << "max one function invoke: " << NL;
        out << "reference of &a is: " << &a << NL;
        out << "reference of &b is: " << &a << NL;
        LF_SEP_LF;
        return (*a > *b) ? *a : *b;
    }

    int max2(const int *a, const int *b) noexcept {
        out << "reference of &a is: " << &a << NL;
        out << "reference of &b is: " << &a << NL;
        return (*a > *b) ? *a : *b;
    }

    int max3(const int *const a, const int *const b) noexcept {
        out << "reference of &a is: " << &a << NL;
        out << "reference of &b is: " << &a << NL;
        return (*a > *b) ? *a : *b;
    }


} // namespace cpp


int main() {


    std::cout << "\n #(09:16:35): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
