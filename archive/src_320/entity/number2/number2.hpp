#ifndef HEADER_NUMBER2_HPP
#define HEADER_NUMBER2_HPP

#pragma once

#include "number2_headers.hpp"

namespace entity {

    class number2 final {

    private:
        int num_{};

    private:
        friend number2 operator+(const number2 &lhs,
                                 const number2 &rhs) noexcept;
        friend number2 operator-(const number2 &lhs,
                                 const number2 &rhs) noexcept;
        friend number2 operator/(const number2 &lhs,
                                 const number2 &rhs) noexcept;
        friend number2 operator*(const number2 &lhs,
                                 const number2 &rhs) noexcept;
        friend std::ostream &operator<<(std::ostream &os,
                                        number2 &rhs) noexcept;

    public:
        number2 &operator++() noexcept;
        number2 operator++(int lhs) noexcept;


    public:
        number2() noexcept;
        number2(int num_param) noexcept;

        [[maybe_unused]] void set_num(int num_param) noexcept;
        [[nodiscard]] int get_num() const noexcept;
    };


} // namespace entity

#endif /* HEADER_NUMBER2_HPP */
