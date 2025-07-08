#include "point.hpp"


namespace entity {
    std::ostream &operator<<(std::ostream &os, const point &other) noexcept(true) {
        return os << "{ "
               << "x:" << other.x_ << ", "
               << "y:" << other.y_
               << " }";
    }

    void swap(point &lhs, point &rhs) noexcept(true) {
        using std::swap;
        swap(lhs.x_, rhs.x_);
        swap(lhs.y_, rhs.y_);
    }

    std::size_t hash_value(const point *other) noexcept(true) {
        std::size_t seed{0x55F41EA0U};
        seed ^= (seed << 6) + (seed >> 2) + 0x85FFA8D5U + static_cast<std::size_t>(other->x_);
        seed ^= (seed << 6) + (seed >> 2) + 0x45EDA8DAU + static_cast<std::size_t>(other->y_);
        return seed;
    }

    point::point() noexcept(true) : point{0.0, 0.0} {
    }

    point::point(const double x_param) noexcept(true)
        : point{x_param, 0.0} {
    }

    point::point(const double x_param, const double y_param) noexcept(true)
        : x_{x_param}, y_{y_param} {
    };

    point::point(const point &other) noexcept(true)
        : point{other.x_, other.y_} {
    }

    point::point(point &&other) noexcept(true)
        : point{
            std::exchange(other.x_, 0.0),
            std::exchange(other.y_, 0.0)
        } {
    }


    point &point::operator=(const point &other) noexcept(true) {
        if (this != &other) {
            x_ = other.x_;
            y_ = other.y_;
        }
        return *this;
    }

    point &point::operator=(point &&other) noexcept(true) {
        if (this != &other) {
            x_ = std::exchange(other.x_, 0.0);
            y_ = std::exchange(other.y_, 0.0);
        }
        return *this;
    }

    point::operator integer() const noexcept(true) {
        return integer{static_cast<int>(x_) + static_cast<int>(y_)};
    }
}
