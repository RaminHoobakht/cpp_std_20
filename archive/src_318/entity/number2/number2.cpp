#include "number2.hpp"

namespace entity {
    number2::number2() noexcept : number2{0} {}

    number2::number2(int num_param) noexcept : num_{num_param} {}

    /* -------- */

    void number2::set_num(const int num_param) noexcept { num_ = num_param; }

    int number2::get_num() const noexcept { return num_; }

    /* -------- */

    number2 operator+(const number2 &lhs, const number2 &rhs) noexcept {
        return number2(lhs.get_num() + rhs.get_num());
    }

    number2 operator-(const number2 &lhs, const number2 &rhs) noexcept {
        return number2(lhs.get_num() - rhs.get_num());
    }

    number2 operator/(const number2 &lhs, const number2 &rhs) noexcept {
        return number2(lhs.get_num() / rhs.get_num());
    }

    number2 operator*(const number2 &lhs, const number2 &rhs) noexcept {
        return number2(lhs.get_num() * rhs.get_num());
    }

    /* -------- */

    number2 &number2::operator++() noexcept {
        ++num_;
        return *this;
    }

    number2 number2::operator++(int lhs) noexcept {
        pout << "value of lhs: " << lhs << NL;
        lhs++;
        return number2(num_++);
    }

    /* -------- */

    std::ostream &operator<<(std::ostream &os, number2 &rhs) noexcept {
        return os << rhs.get_num();
    }

} // namespace entity
