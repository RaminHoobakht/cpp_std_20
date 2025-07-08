#include "point.hpp"

namespace entity {
    /* friend: stream operator overloading */
    std::ostream &operator<<(std::ostream &os,
                             const point &other) noexcept(true) {
        return os << "{ "
               << "\"x\":" << other.get_x() << ", "
               << "\"y\":" << other.get_y() << " "
               << "}";
    }


    /* friend: swap function */
    void swap(point &lhs, point &rhs) noexcept(true) {
        using std::swap;
        swap(lhs.x_, rhs.x_);
        swap(lhs.y_, rhs.y_);
    }

    /* friend hash function */
    std::size_t hash_value(point &other) noexcept(true) {
        std::size_t seed{0x250E0EAFU};
        seed ^= (seed << 6) + (seed >> 2) + 0x7245DFABU +
                static_cast<std::size_t>(other.x_);
        seed ^= (seed << 6) + (seed >> 2) + 0x81ADDAEBU +
                static_cast<std::size_t>(other.y_);
        return seed;
    }


    /* default constructor */
    point::point() noexcept(true) : point{0.0, 0.0} {
    }

    /* parameterized constructor */
    point::point(const double x_param) noexcept(true) : point{x_param, 0.0} {
    }

    point::point(const double x_param, const double y_param) noexcept(true) : x_{x_param}, y_{y_param} {
    }

    /* copy constructor */
    point::point(const point &other) noexcept(true) : point{other.x_, other.y_} {
    }

    /* move constructor */
    point::point(point &&other) noexcept(true) : point{std::exchange(other.x_, 0.0), std::exchange(other.y_, 0.0)} {
    }

    /* setter */
    [[maybe_unused]] void point::set_x(const double x_param) noexcept(true) {
        x_ = x_param;
    }

    [[maybe_unused]] void point::set_y(const double y_param) noexcept(true) {
        y_ = y_param;
    }

    /* getter */

    [[nodiscard]] double point::get_x() const noexcept(true) { return x_; }

    [[nodiscard]] double point::get_y() const noexcept(true) { return y_; }

    /* copy equality operator overloading */
    point &point::operator=(const point &other) noexcept(true) {
        if (this != &other) {
            x_ = other.x_;
            y_ = other.y_;
        }
        return *this;
    }

    /* move equality operator overloading */
    point &point::operator=(point &&other) noexcept(true) {
        if (this != &other) {
            x_ = std::exchange(other.x_, 0.0);
            y_ = std::exchange(other.y_, 0.0);
        }
        return *this;
    }

    /* conversion operator overloading */
    point::operator integer() const noexcept(true) {
        return integer{static_cast<int>(x_) + static_cast<int>(y_)};
    }
} // namespace entity
