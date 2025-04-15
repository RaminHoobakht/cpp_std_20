/* function overloading */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout << SP
#define log std::clog << SP
#define err std::cerr << SP

namespace cpp {

    /* both two function are the same function. */
    int max(int a, int b) noexcept;
    int max(const int a, const int b) noexcept;

    int max(int a, int b) noexcept {
        out << "int max(int, int) was invoked: " << NL;
        return (a > b) ? a : b;
    }

    int max(const int a, const int b) noexcept {
        out << "int max(const int, const int) was invoked: " << NL;
        return (a > b) ? a : b;
    }


} // namespace cpp


int main() {


    std::cout << "\n #(02:42:11): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
