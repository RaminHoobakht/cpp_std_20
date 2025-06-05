#ifndef HEADER_POINT3_HPP
#define HEADER_POINT3_HPP

#pragma once

#include "point3_headers.hpp"

namespace entity {

    class point3 final {

    private:
        double x_{};
        double y_{};
        double length_{};
        std::stringstream ss_{};
        void calc_length() noexcept;

    public:
        point3() noexcept;
        explicit point3(double x_param) noexcept;
        point3(double x_param, double y_param) noexcept;
        point3(const point3 &rhs) noexcept;
        point3(point3 &&rhs) noexcept;
        ~point3() noexcept;

        /* -------- */

        [[maybe_unused]] void set_x(double x_param) noexcept;
        [[maybe_unused]] void set_y(double y_param) noexcept;

        /* -------- */

        [[nodiscard]] double get_x() const noexcept;
        [[nodiscard]] double get_y() const noexcept;
        [[nodiscard]] double get_length() const noexcept;

        /* -------- */

        void print_info() const noexcept;

        /* -------- */

        point3 &operator=(const point3 &rhs) noexcept;
        point3 &operator=(point3 &&rhs) noexcept;

        point3 operator+(const point3 &rhs) noexcept;
    };


} // namespace entity


#endif
