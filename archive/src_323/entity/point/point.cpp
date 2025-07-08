#include "point.hpp"

namespace entity {


    point::point() noexcept(true) : point{0.0, 0.0} {}

    point::point(double x_param) noexcept(true) : point{x_param, 0.0} {}

    point::point(double x_param, double y_param) noexcept(true) :
        x_{x_param}, y_{y_param} {
        length_ = calc_length();
    }

    point::point(const point &lhs) noexcept(true) : point{lhs.x_, lhs.y_} {}

    point::point(point &&lhs) noexcept(true) :
        x_{std::exchange(lhs.x_, 0.0)}, y_{std::exchange(lhs.y_, 0.0)} {}


    /* -------- */

    double point::calc_length() noexcept(true) {
        return sqrt(pow(x_ - 0, 2) + pow(y_ - 0, 2));
    }

    bool point::ulp_equal(double a, double b, int max_ulp = 4) noexcept(true) {
        return std::fabs(a - b) <=
               max_ulp * std::numeric_limits<double>::epsilon();
    }

    /* -------- */


    std::ostream &operator<<(std::ostream &os,
                             const point &lhs) noexcept(true) {
        return os << "[ x:" << lhs.x_ << ", y:" << lhs.y_
                  << ", length:" << lhs.length_ << " ]";
    }

    /* -------- */

    bool point::operator==(const point &lhs) noexcept(true) {
        return ulp_equal(length_, lhs.length_);
    }

    bool point::operator>(const point &lhs) const noexcept(true) {

        return length_ > lhs.length_;
    }

    bool point::operator<(const point &lhs) const noexcept(true) {
        return length_ < lhs.length_;
    }

    bool point::operator>=(const point &lhs) const noexcept(true) {
        return length_ >= lhs.length_;
    }

    bool point::operator<=(const point &lhs) const noexcept(true) {
        return length_ <= lhs.length_;
    }

    bool point::operator!=(const point &lhs) noexcept(true) {
        return !ulp_equal(length_, lhs.length_);
    }


} // namespace entity
