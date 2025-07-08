#include "point4.hpp"

namespace entity {

    point4::point4() noexcept : point4(0.0, 0.0) {}
    point4::point4(const double x_param) noexcept : point4(x_param, 0.0) {}
    point4::point4(const double x_param, const double y_param) noexcept :
        x_{x_param}, y_{y_param} {}


    void point4::print_info() const noexcept {
        pout << std::format("[ x:{}, y:{} ]\n", x_, y_);
    }

    point4 &operator+=(point4 &lhs, const point4 &rhs) noexcept {
        lhs.x_ += rhs.x_;
        lhs.y_ += rhs.y_;
        return lhs;
    }

    point4 &operator-=(point4 &lhs, const point4 &rhs) noexcept {
        lhs.x_ -= rhs.x_;
        lhs.y_ -= rhs.y_;
        return lhs;
    }

    point4 operator+(const point4 &lhs, const point4 &rhs) noexcept {
            point4 my_point{lhs.x_, lhs.y_};
            return my_point+=rhs;
    }

    point4 operator-(const point4 &lhs, const point4 &rhs) noexcept {
            point4 my_point{lhs.x_, lhs.y_};
            return my_point-=rhs;
    }


} // namespace entity
