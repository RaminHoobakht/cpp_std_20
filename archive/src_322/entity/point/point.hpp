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
        double x_{};
        double y_{};

    public:
        point() noexcept(true);
        explicit point(double x_param) noexcept(true);
        point(double x_param, double y_param) noexcept(true);
        point(const point &lhs) noexcept(true);
        point(point &&lhs) noexcept(true);
        point(const number &lhs) noexcept(true);


        ~point() noexcept(true) = default;

        /* -------- */

        [[maybe_unused]] void set_x(double x_param) noexcept(true);
        [[maybe_unused]] void set_y(double y_param) noexcept(true);
        [[nodiscard]] double get_x() const noexcept(true);
        [[nodiscard]] double get_y() const noexcept(true);

        /* -------- */

        point &operator=(const point &lhs) noexcept(true);
        point &operator=(point &&lhs) noexcept(true);
        point &operator=(const number &lhs) noexcept(true);

        /* -------- */

        /*
         * - conversion operator overloading
         * - copy constructor
         * - assignment operator overloading
         */
    };

} // namespace entity


#endif
