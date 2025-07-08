#ifndef HEADER_NUMBER_HPP
#define HEADER_NUMBER_HPP

#pragma once


#include "number_headers.hpp"


namespace entity {

    class number final {

    private:
        friend std::ostream &operator<<(std::ostream &os,
                                        const number &lhs) noexcept(true);

    private:
        int num_{};

    public:
        number() noexcept(true);
        number(const int num_param) noexcept(true);
        number(const number &lhs) noexcept(true);
        number(number &&lhs) noexcept(true);
        ~number() noexcept(true) = default;

        [[maybe_unused]] void set_number(int num_param) noexcept(true);
        [[nodiscard]] int get_number() const noexcept(true);

        number &operator=(const number &lhs) noexcept(true);

        // operator point() noexcept(true) {
        //     pout << "using type conversion operator overloading ..." << NL;
        //     return point{static_cast<double>(num_), static_cast<double>(num_)};
        // }
    };


} // namespace entity


#endif
