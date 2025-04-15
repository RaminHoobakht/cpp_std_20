/* function overloading  */

#include "../header/utillib.hpp"
#include <iostream>

#define out std::cout
#define log std::clog
#define err std::cerr

namespace cpp {

    /* all max function are the same function */
    int max(int *numbers, const size_t size) noexcept;
    int max(int numbers[], const size_t size) noexcept;
    int max(int *numbers[12], const size_t size) noexcept;


    int max(int *numbers, const size_t size) noexcept {

        int max{};

        for (size_t i{util::zero}; i < size; ++i) {
            int temp{*(numbers) + i};
            if (temp > max) {
                max = temp;
            }
        }
        return max;
    }


    int max(int numbers[], const size_t size) noexcept {

        int max{};

        for (size_t i{util::zero}; i < size; ++i) {
            int temp{*(numbers) + i};
            if (temp > max) {
                max = temp;
            }
        }
        return max;
    }

    int max(int *numbers[12], const size_t size) noexcept {

        int max{};

        for (size_t i{util::zero}; i < size; ++i) {
            int temp{*(numbers) + i};
            if (temp > max) {
                max = temp;
            }
        }
        return max;
    }


} // namespace cpp


int main() {


    std::cout << "\n #(19:57:13): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
