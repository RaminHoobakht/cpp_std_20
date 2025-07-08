#include "number.hpp"

namespace entity {

    number::number() noexcept(true) : number{0} {}
    number::number(const int num_param) noexcept(true) : num_{num_param} {}
    number::number(const number &lhs) noexcept(true) : number{lhs.num_} {}

    number::number(number &&lhs) noexcept(true) :
        num_{std::exchange(lhs.num_, 0)} {}
    // number::~number() noexcept(true) {}

    /* -------- */

    void number::set_number(const int num_param) noexcept(true) {
        num_ = num_param;
    }

    int number::get_number() const noexcept(true) { return num_; }

    /* -------- */

    std::ostream &operator<<(std::ostream &os,
                             const number &lhs) noexcept(true) {
        return os << lhs.num_;
    }


    number &number::operator=(const number &lhs) noexcept(true) {
        if (this != &lhs) {
            num_ = lhs.num_;
        }
        return *this;
    }


} // namespace entity
