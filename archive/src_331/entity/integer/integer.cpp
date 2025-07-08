#include "integer.hpp"

namespace entity {
    /* friend: stream operator overloading */
    std::ostream &operator<<(std::ostream &os, const integer &other) noexcept(true) {
        return os << other.get_number();
    }

    /* friend: equality operator overloading */
    bool operator==(const integer &lhs, const integer &rhs) noexcept(true) {
        return (lhs.get_number() == rhs.get_number());
    }

    bool operator==(const int lhs, const integer &rhs) noexcept(true) {
        return lhs == rhs.get_number();
    }

    bool operator==(const integer &lhs, const int rhs) noexcept(true) {
        return lhs.get_number() == rhs;
    }

    /* friend: swap */
    void swap(integer &lhs, integer &rhs) noexcept(true) {
        std::swap(lhs.number_, rhs.number_);
    }

    /* friend: hash */
    std::size_t hash_value(const integer &obj) {
        std::size_t seed = 0x296CA6E2U;
        seed ^= (seed << 6) + (seed >> 2) + 0x407BCED4U + static_cast<std::size_t>(obj.number_);
        return seed;
    }

    /* -------- */

    /* default constructor */
    integer::integer() noexcept(true) : integer{0} {
    }

    /* parameterized constructor */
    integer::integer(const int number_param) noexcept(true) : number_{number_param} {
    }

    /* copy constructor */
    integer::integer(const integer &other) noexcept(true) : integer{other.get_number()} {
    }

    /* move constructor */
    integer::integer(integer &&other) noexcept(true) : integer{std::exchange(other.number_, 0)} {
    }


    /* getter and setter */
    void integer::set_number(const int number_param) noexcept(true) {
        number_ = number_param;
    }

    /* getter */
    int integer::get_number() const noexcept(true) {
        return number_;
    }

    /* equal copy */
    integer &integer::operator=(const integer &other) noexcept(true) {
        if (this != &other) {
            number_ = other.get_number();
        }
        return *this;
    }

    /* equal move */
    integer &integer::operator=(integer &&other) noexcept(true) {
        if (this != &other) {
            number_ = std::exchange(other.number_, 0);
        }
        return *this;
    }
}
