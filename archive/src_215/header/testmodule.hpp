#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <iostream>
#include "utillib.hpp"

/* declaration */
namespace cpp {

    template<double threshold, typename T>
    bool is_valid(T (&collection)[], size_t size) noexcept {

        T sum{};
        for (size_t i{util::zero}; i < size; ++i) {
            sum += collection[i];
        }
        return sum > threshold;
    }

} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
