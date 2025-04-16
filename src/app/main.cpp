/* function overloading */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout << SP
#define log std::clog << SP
#define err std::cerr << SP

namespace cpp {

    int max(int *a, int *b) noexcept;

    /* both two below functions are the same functions.
       and can not overloaded */
    int max(const int *a, const int *b) noexcept;
    int max(const int *const a, const int *const b) noexcept;

    /* ---------------- */

    int max(int *a, int *b) noexcept {
        /* code */
        return (*a > *b) ? *a : *b;
    }

    int max(const int *a, const int *b) noexcept {
        /* code */
        return (*a > *b) ? *a : *b;
    }

    int max(const int *const a, const int *const b) noexcept {
        /* code */
        return (*a > *b) ? *a : *b;
    }


} // namespace cpp


int main() {

    int x{25};
    int y{14};

    auto result{cpp::max(&x, &y)};
    out << "max is: " << result << NL;

    std::cout << "\n #(03:18:01): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
