#include "integer.hpp"

namespace entity {
    /* friend: stream overloading */
    std::ostream &operator<<(std::ostream &os, const integer &other) noexcept(true) {
        return os << other.get_number();
    }

    /* friend: swap function */
    void swap(integer &lhs, integer &rhs) noexcept(true) {
        using std::swap;
        swap(lhs.number_, rhs.number_);
    }

    /* friend hash function */
    std::size_t hash_value(const integer &other) noexcept(true) {
        std::size_t seed = 0x0E6BAFB4U;
        seed ^= (seed << 6) + (seed >> 2) + 0x545FC7A2U + static_cast<std::size_t>(other.number_);
        return seed;
    }

    /* -------- */

    /* default constructor */
    integer::integer() noexcept(true) : integer{0} {
    };

    /* parameterized constructor. not explicit */
    integer::integer(const int number_param) noexcept(true) : number_{number_param} {
    }

    /* copy constructor */
    integer::integer(const integer &other) noexcept(true) : integer{other.get_number()} {
    }

    /* move constructor */
    integer::integer(integer &&other) noexcept(true) : integer{std::exchange(other.number_, 0)} {
    }

    /* -------- */

    /* setter */
    [[maybe_unused]] void integer::set_number(int number_param) noexcept(true) {
        number_ = number_param;
    }

    /* getter */
    [[nodiscard]] int integer::get_number() const noexcept(true) {
        return number_;
    }


    /* -------- */

    /* copy equal overloading */
    integer &integer::operator=(const integer &other) noexcept(true) {
        if (this != &other) {
            number_ = other.get_number();
        }
        return *this;
    }

    /* move equal overloading */
    integer &integer::operator=(integer &&other) noexcept(true) {
        if (this != &other) {
            number_ = std::exchange(other.number_, 0);
        }
        return *this;
    }


    /* -------- */

    /* equality overloading */
    bool integer::operator==(const integer &other) const noexcept(true) {
        return (number_ == other.get_number());
    }

    bool integer::operator==(const int other) const noexcept(true) {
        return (number_ == other);
    }

    /* -------- */

    /* three-way comparison overloading */

    auto integer::operator<=>(const int other) const {
        return (number_ <=> other);
    }


    /* -------- */
    /* -------- */
}
