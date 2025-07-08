#include "number.hpp"

namespace entity {

    number operator+(const number &lhs, const number &rhs) noexcept(true) {
        return number{lhs.num_ + rhs.num_};
    }

    number operator-(const number &lhs, const number &rhs) noexcept(true) {
        return number{lhs.num_ - rhs.num_};
    }

    number operator/(const number &lhs, const number &rhs) noexcept(true) {
        return number{lhs.num_ / rhs.num_};
    }

    number operator*(const number &lhs, const number &rhs) noexcept(true) {
        return number{lhs.num_ * rhs.num_};
    }

    /* -------- */

    bool operator==(const number &lhs, const number &rhs) noexcept(true) {
        return std::fabs(lhs.num_ - rhs.num_) <=
               4 * std::numeric_limits<double>::epsilon();
    }

    bool operator>(const number &lhs, const number &rhs) noexcept(true) {
        return lhs.num_ > rhs.num_;
    }

    bool operator<(const number &lhs, const number &rhs) noexcept(true) {
        return lhs.num_ < rhs.num_;
    }

    bool operator>=(const number &lhs, const number &rhs) noexcept(true) {
        return lhs.num_ >= rhs.num_;
    }

    bool operator<=(const number &lhs, const number &rhs) noexcept(true) {
        return lhs.num_ <= rhs.num_;
    }

    bool operator!=(const number &lhs, const number &rhs) noexcept(true) {
        return !(std::fabs(lhs.num_ - rhs.num_) <=
                 4 * std::numeric_limits<double>::epsilon());
    }

    /* -------- */


    std::ostream &operator<<(std::ostream &os,
                             const number &lhs) noexcept(true) {
        return os << lhs.get_number();
    }

    /* -------- */

    number::number() noexcept(true) : number{0.0} {}

    number::number(double num_param) noexcept(true) : num_{num_param} {}

    number::number(const number &lhs) noexcept(true) : number{lhs.num_} {}

    number::number(number &&lhs) noexcept(true) :
        number{std::exchange(lhs.num_, 0.0)} {}

    /* -------- */

    void number::set_number(double num_param) noexcept(true) {
        num_ = num_param;
    }

    double number::get_number() const noexcept(true) { return num_; }


    /* -------- */

    number &number::operator=(const number &lhs) noexcept(true) {
        if (this != &lhs) {
            num_ = lhs.num_;
        }
        return *this;
    }

    number &number::operator=(number &&lhs) noexcept(true) {
        if (this != &lhs) {
            num_ = std::exchange(lhs.num_, 0.0);
        }
        return *this;
    }


    /* -------- */
    /* -------- */
    /* -------- */


} // namespace entity
