#ifndef HEADER_POINT4_HPP
#define HEADER_POINT4_HPP

#pragma once

#include "point4_headers.hpp"

namespace entity {

    class point4 final {

    private:
        double x_{};
        double y_{};

    public:
        point4() noexcept;
        point4(double x_param) noexcept;
        point4(double x_param, double y_param) noexcept;

        [[maybe_unused]] void print_info() const noexcept;

        friend point4 &operator+=(point4 &lhs, const point4 &rhs) noexcept;
        friend point4 &operator-=(point4 &lhs, const point4 &rhs) noexcept;

        friend point4 operator+(const point4 &lhs, const point4 &rhs) noexcept;
        friend point4 operator-(const point4 &lhs, const point4 &rhs) noexcept;
    };


} // namespace entity


#endif /* HEADER_POINT4_HPP */
