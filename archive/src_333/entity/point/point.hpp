#ifndef HEADER_POINT_HPP
#define HEADER_POINT_HPP

#pragma once

#include <cmath>
#include <compare>
#include <limits>
#include <ostream>
#include <utility>
#include "../integer/integer.hpp"


namespace entity {


    class point final {

    private:
        /* friend: stream operator overloading */
        friend std::ostream &operator<<(std::ostream &os,
                                        const point &other) noexcept(true);

        /* friend: equality operator overloading */
        /* friend: three-way operator overloading */

        /* friend: swap function */
        friend void swap(point &lhs, point &rhs) noexcept(true);

        /* friend hash function */
        friend std::size_t hash_value(point &other) noexcept(true);

        /* double equality function */

    private:
        /* double data-type fields */
        double x_{};
        double y_{};

    public:
        /* default constructor */
        point() noexcept(true);

        /* parameterized constructor */
        point(double x_param) noexcept(true);
        point(double x_param, double y_param) noexcept(true);

        /* copy constructor */
        point(const point &other) noexcept(true);

        /* move constructor */
        point(point &&other) noexcept(true);

        /* destructor */
        ~point() noexcept(true) = default;


        /* setter */
        [[maybe_unused]] void set_x(double x_param) noexcept(true);
        [[maybe_unused]] void set_y(double y_param) noexcept(true);

        /* getter */

        [[nodiscard]] double get_x() const noexcept(true);
        [[nodiscard]] double get_y() const noexcept(true);

        /* copy equality operator overloading */
        point &operator=(const point &other) noexcept(true);

        /* move equality operator overloading */
        point &operator=(point &&other) noexcept(true);

        /* conversion operator overloading */
        operator integer() const noexcept(true);
    };
} // namespace entity


#endif
