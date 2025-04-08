/* find max number from a double numbers array */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

double *find_max1(double scores[], size_t size) noexcept;
const double *find_max2(const double scores[], size_t size) noexcept;

int main() {

    double nums[]{10.36, 36.25, 96.36, 85.21, 45.36,
                  78.21, 45.32, 65.32, 85.36, 104.369};
    size_t size{std::size(nums)};

    double *resutl1{find_max1(nums, size)};
    std::cout << "max double numbe is: " << *resutl1 << NL;

    const double *resutl2{find_max2(nums, size)};
    std::cout << "max double numbe is: " << *resutl2 << NL;

    std::cout << "\n #(13:36:10): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

double *find_max1(double scores[], const size_t size) noexcept {

    double max{};
    size_t index{};

    for (size_t i{0LU}; i < size; ++i) {
        if (scores[i] > max) {
            max = scores[i];
            index = i;
        }
    }
    return &scores[index];
}


const double *find_max2(const double scores[], const size_t size) noexcept {

    double max{};
    size_t index{};

    for (size_t i{0LU}; i < size; ++i) {
        if (scores[i] > max) {
            max = scores[i];
            index = i;
        }
    }
    return &scores[index];
}
