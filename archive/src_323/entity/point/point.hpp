#ifndef HEADER_POINT_HPP
#define HEADER_POINT_HPP

#pragma once

#include "point_headers.hpp"

namespace entity {

    class point final {

    private:
        friend std::ostream &operator<<(std::ostream &os,
                                        const point &lhs) noexcept(true);

    private:
        double calc_length() noexcept(true);
        bool ulp_equal(double a, double b, int max_ulp) noexcept(true);


    private:
        double x_{};
        double y_{};
        double length_{};


    public:
        point() noexcept(true);
        explicit point(double x_param) noexcept(true);
        point(double x_param, double y_param) noexcept(true);
        point(const point &lhs) noexcept(true);
        point(point &&lhs) noexcept(true);
        ~point() noexcept(true) = default;

        /* -------- */

        bool operator==(const point &lhs) noexcept(true);
        bool operator>(const point &lhs) const noexcept(true);
        bool operator<(const point &lhs) const noexcept(true);
        bool operator>=(const point &lhs) const noexcept(true);
        bool operator<=(const point &lhs) const noexcept(true);
        bool operator!=(const point &lhs) noexcept(true);
    };


} // namespace entity


#endif
