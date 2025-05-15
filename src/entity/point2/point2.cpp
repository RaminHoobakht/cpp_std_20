#include "point2.hpp"

namespace entity {

    point2::point2() noexcept : point2(0.0, 0.0) {
        pout << "default constructor ..." << NL;
    }

    point2::point2(const double x_param, const double y_param) noexcept :
        x_(x_param), y_(y_param) {
        /* code */
        pout << "constructor two ..." << NL;
    }

    point2::point2(double xy_coord) noexcept : point2(xy_coord, 0) {
        pout << "constructor one ..." << NL;
    }

    point2::point2(const point2 &rhs) noexcept : point2(rhs.x_, rhs.y_) {
        pout << "copy constructor ..." << NL;
    }

    long double point2::length() const noexcept {
        return sqrtf64x(pow(x_ - 0, 2.0) + pow(y_ - 0, 2.0));
    }

    /* -------- */

    void point2::set_x(const double x_param) noexcept { x_ = x_param; }

    void point2::set_y(const double y_param) noexcept { y_ = y_param; }

    double point2::get_x() const noexcept { return x_; }

    double point2::get_y() const noexcept { return y_; }

    /* -------- */

    size_t point2::get_point_count() const noexcept { return point2_count; }

    /* -------- */

} // namespace entity
