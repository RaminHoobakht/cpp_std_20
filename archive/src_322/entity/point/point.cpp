#include "point.hpp"


namespace entity {

    point::point() noexcept(true) : point{0.0, 0.0} {}
    point::point(const double x_param) noexcept(true) : point{x_param, 0.0} {}
    point::point(const double x_param, const double y_param) noexcept(true) :
        x_{x_param}, y_{y_param} {}
    point::point(const point &lhs) noexcept(true) : point{lhs.x_, lhs.y_} {}
    point::point(point &&lhs) noexcept(true) :
        point{std::exchange(lhs.x_, 0.0), std::exchange(lhs.y_, 0.0)} {}
    point::point(const number &lhs) noexcept(true) {
        pout << "using constructor for conversion ..." << NL;
        x_ = static_cast<double>(lhs.get_number());
        y_ = static_cast<double>(lhs.get_number());
    }

    /* -------- */

    void point::set_x(const double x_param) noexcept(true) { x_ = x_param; }
    void point::set_y(const double y_param) noexcept(true) { y_ = y_param; }
    double point::get_x() const noexcept(true) { return x_; }
    double point::get_y() const noexcept(true) { return y_; }

    /* -------- */

    point &point::operator=(const point &lhs) noexcept(true) {
        if (this != &lhs) {
            x_ = lhs.x_;
            y_ = lhs.y_;
        }
        return *this;
    }

    point &point::operator=(point &&lhs) noexcept(true) {
        if (this != &lhs) {
            x_ = std::exchange(lhs.x_, 0.0);
            y_ = std::exchange(lhs.y_, 0.0);
        }
        return *this;
    }

    point &point::operator=(const number &lhs) noexcept(true) {
        pout << "using assignment overloading for conversion ..." << NL;
        x_ = static_cast<double>(lhs.get_number());
        y_ = static_cast<double>(lhs.get_number());
        return *this;
    }

    /* -------- */

    std::ostream &operator<<(std::ostream &os,
                             const point &lhs) noexcept(true) {
        return os << "[ x:" << lhs.get_x() << ", " << "y:" << lhs.get_y()
                  << " ]" << NL;
    }


} // namespace entity
