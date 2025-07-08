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

    /* -------- */

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

} // namespace entity
