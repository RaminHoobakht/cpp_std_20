#include "number.hpp"


namespace entity {

    number::number() noexcept : number{0} {}
    number::number(int num_param) noexcept : num_{num_param} {}
    number::~number() noexcept {}

    /* -------- */

    void number::set_number(int num_param) noexcept { num_ = num_param; }

    int number::get_number() const noexcept { return num_; }

    /* -------- */

    number operator+(const number &lhs, const number &rhs) noexcept {
        return number(lhs.num_ + rhs.num_);
    }

    number operator-(const number &lhs, const number &rhs) noexcept {
        return number(lhs.num_ - rhs.num_);
    }

    number operator/(const number &lhs, const number &rhs) noexcept {
        return number(lhs.num_ / rhs.num_);
    }

    number operator*(const number &lhs, const number &rhs) noexcept {
        return number(lhs.num_ * rhs.num_);
    }

    number operator%(const number &lhs, const number &rhs) noexcept {
        return number(lhs.num_ % rhs.num_);
    }

    /* -------- */

    std::ostream &operator<<(std::ostream &os, const number &rhs) noexcept {
        return os << rhs.num_;
    }

    /* -------- */

    number &number::operator++() noexcept {
        ++num_;
        return *this;
    }


} // namespace entity
