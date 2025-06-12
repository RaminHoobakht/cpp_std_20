#ifndef HEADERS_NUMBER_HPP
#define HEADERS_NUMBER_HPP

#pragma once

#include "number_headers.hpp"

namespace entity {


    class number final {

    private:
        friend number operator+(const number &lhs, const number &rhs) noexcept;
        friend number operator-(const number &lhs, const number &rhs) noexcept;
        friend number operator/(const number &lhs, const number &rhs) noexcept;
        friend number operator*(const number &lhs, const number &rhs) noexcept;
        friend number operator%(const number &lhs, const number &rhs) noexcept;

    private:
        friend std::ostream &operator<<(std::ostream &os,
                                        const number &rhs) noexcept;

    private:
        int num_{};

    public:
        number() noexcept;
        number(int num_param) noexcept;
        ~number() noexcept;

        [[maybe_unused]] void set_number(int num_param) noexcept;
        [[nodiscard]] int get_number() const noexcept;

    public:
        number &operator++() noexcept;
    };

} // namespace entity

#endif /* HEADERS_NUMBER_HPP */
