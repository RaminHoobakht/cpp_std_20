/* function overloading */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

namespace cpp {

    /* all three functions are same and can not be overloaded */
    int max(int *numbers, size_t size) noexcept;
    int max(int numbers[], const size_t size) noexcept;
    int max(int numbers[10], const size_t size) noexcept;


    int max(int *numbers, const size_t size) noexcept {
        int max{};
        for (size_t i{util::zero}; i < size; ++i) {
            if (*(numbers + i) > max) {
                max = *(numbers + i);
            }
        }
        return max;
    }

    int max(int numbers[], const size_t size) noexcept {
        int max{};
        for (size_t i{util::zero}; i < size; ++i) {
            if (*(numbers + i) > max) {
                max = *(numbers + i);
            }
        }
        return max;
    }

    int max(int numbers[10], const size_t size) noexcept {
        int max{};
        for (size_t i{util::zero}; i < size; ++i) {
            if (*(numbers + i) > max) {
                max = *(numbers + i);
            }
        }
        return max;
    }


} // namespace cpp


int main() {


    std::cout << "\n #(12:56:31): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
