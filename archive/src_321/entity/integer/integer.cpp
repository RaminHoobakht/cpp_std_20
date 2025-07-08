#include "integer.hpp"


namespace entity {

    integer::integer() noexcept(true) : integer(0) {}

    integer::integer(const int number_param) noexcept(true) :
        number_{number_param} {}

    integer::integer(const integer &rhs) noexcept(true) :
        integer(rhs.number_) {}

    integer::integer(integer &&rhs) noexcept(true) :
        number_{std::exchange(rhs.number_, 0)} {}

    integer::~integer() noexcept(true) {}

    /* -------- */

    void integer::set_number(const int number_param) noexcept(true) {
        number_ = number_param;
    }

    int integer::get_integer() const noexcept(true) { return number_; }

    /* -------- non friend operator overloading -------- */

    integer &integer::operator=(const integer &rhs) noexcept(true) {
        if (this != &rhs) {
            number_ = rhs.number_;
        }
        return *this;
    }

    integer &integer::operator=(integer &&rhs) noexcept(true) {
        if (this != &rhs) {
            number_ = std::exchange(rhs.number_, 0);
        }
        return *this;
    }


    /* -------- friend operator overloading -------- */

    std::ostream &operator<<(std::ostream &os,
                             const integer &rhs) noexcept(true) {
        return os << rhs.get_integer();
    }

    integer operator+(const integer &lhs, const integer &rhs) noexcept(true) {
        return integer(lhs.number_ + rhs.number_);
    }

    integer operator-(const integer &lhs, const integer &rhs) noexcept(true) {
        return integer(lhs.number_ - rhs.number_);
    }

    integer operator/(const integer &lhs, const integer &rhs) noexcept(true) {
        return integer(lhs.number_ / rhs.number_);
    }

    integer operator*(const integer &lhs, const integer &rhs) noexcept(true) {
        return integer(lhs.number_ * rhs.number_);
    }

    integer operator%(const integer &lhs, const integer &rhs) noexcept(true) {
        return integer(lhs.number_ % rhs.number_);
    }

    integer &operator++(integer &rhs) noexcept(true) {
        ++rhs.number_;
        return rhs;
    }


} // namespace entity
