#include "point3.hpp"


namespace entity {

    point3::point3() noexcept : point3(0.0, 0.0) {}

    point3::point3(const double x_param) noexcept : point3(x_param, 0.0) {}

    point3::point3(const double x_param, const double y_param) noexcept :
        x_(x_param), y_(y_param) {
        ss_ << this;
        calc_length();
        pout << "point3 -> constructor -> " << ss_.str() << NL;
    }

    point3::point3(const point3 &rhs) noexcept {
        if (this != &rhs) {
            x_ = rhs.x_;
            y_ = rhs.y_;
        }
    }

    point3::point3(point3 &&rhs) noexcept {
        if (this != &rhs) {
            x_ = std::exchange(rhs.x_, 0.0);
            y_ = std::exchange(rhs.y_, 0.0);
        }
    }

    point3::~point3() noexcept {
        pout << "Goodbye point3 -> " << ss_.str() << NL;
    }

    /* -------- */

    void point3::set_x(const double x_param) noexcept { x_ = x_param; }

    void point3::set_y(const double y_param) noexcept { y_ = y_param; }

    void point3::calc_length() noexcept {
        length_ = sqrt(pow((x_ - 0), 2) + pow((y_ - 0), 2));
    }

    /* -------- */

    double point3::get_x() const noexcept { return x_; }

    double point3::get_y() const noexcept { return y_; }

    double point3::get_length() const noexcept { return length_; }

    /* -------- */

    point3 &point3::operator=(const point3 &rhs) noexcept {
        if (this != &rhs) {
            x_ = rhs.x_;
            y_ = rhs.y_;
        }
        return *this;
    }

    point3 &point3::operator=(point3 &&rhs) noexcept {
        if (this != &rhs) {
            x_ = std::exchange(rhs.x_, 0.0);
            y_ = std::exchange(rhs.y_, 0.0);
        }
        return *this;
    }

    point3 point3::operator+(const point3 &rhs) noexcept {
        return point3(x_ + rhs.get_x(), y_ + rhs.get_y());
    }

    void point3::print_info() const noexcept {
        pout << "{ \"x\":" << x_ << ", "
             << "\"y\":" << y_ << ", "
             << "\"length\":" << length_ << " } -> " << ss_.str() << NL;
    }

    point3 operator+(const point3 &rhs, const point3 &lhs) noexcept {
        /* code */
        return point3(rhs.get_x() + lhs.get_x(), rhs.get_y() + lhs.get_y());
    }

    double &point3::operator[](size_t index) noexcept {
        // if (index > 1) {
        //     throw std::out_of_range("index is out of range ...");
        // }
        assert(index == 0 || index == 1);
        return (index == 0) ? x_ : y_;
    }

} // namespace entity
