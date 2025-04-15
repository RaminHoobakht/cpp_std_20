
#include "overloading.hpp"


namespace cpp {

    double max(double *numbers, const size_t size) noexcept {

        double max{};

        for (size_t i{0LU}; i < size; ++i) {
            double temp = *(numbers + i);
            if (temp > max) {
                max = temp;
            }
        }
        return max;
    }

    int max(int *numbers, const size_t size) noexcept {

        int max{};

        for (size_t i{0LU}; i < size; ++i) {
            int temp = *(numbers + i);
            if (temp > max) {
                max = temp;
            }
        }
        return max;
    }


} // namespace cpp
