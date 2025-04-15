/* function overloading */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout << SP
#define log std::clog << SP
#define err std::cerr << SP

namespace cpp {

    /* both below functions are the same function and
       can not be overloaded */
    int max(const int *a, const int *b) noexcept;
    int max(const int *const a, const int *const b) noexcept;

    int max(const int *a, const int *b) noexcept {
        out << "int max(const int *a, const int *b) was invoked: " << NL;
        return (*a > *b) ? *a : *b;
    }

    int max(const int *const a, const int *const b) noexcept {
        out << "int max(const int *a, const int *b) was invoked: " << NL;
        return (*a > *b) ? *a : *b;
    }


} // namespace cpp


int main() {


    std::cout << "\n #(03:12:18): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
