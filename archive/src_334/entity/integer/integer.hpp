#ifndef HEADER_INTEGER_HPP
#define HEADER_INTEGER_HPP

#pragma once

#include <compare>
#include <ostream>
#include <utility>


namespace entity {
    class integer final {
    private:
        friend constexpr std::ostream &
        operator<<(std::ostream &os, const integer &other) noexcept(true);

        friend constexpr void swap(integer &lhs, integer &rhs) noexcept(true);

        friend constexpr std::size_t
        hash_value(const integer &other) noexcept(true);

        friend constexpr bool operator==(const integer &lhs,
                                         const integer &rhs) noexcept(true);
        friend constexpr bool operator==(int lhs,
                                         const integer &rhs) noexcept(true);

        friend constexpr auto operator<=>(const integer &lhs,
                                          const integer &rhs);
        friend constexpr auto operator<=>(int lhs, const integer &rhs);

    private:
        int number_{};

    public:
        constexpr integer() noexcept(true);

        constexpr integer(int number_param) noexcept(true);

        constexpr integer(const integer &other) noexcept(true);

        constexpr integer(integer &&other) noexcept(true);

        constexpr ~integer() noexcept(true) = default;

        [[maybe_unused]] constexpr void
        set_number(int number_param) noexcept(true);

        [[nodiscard]] constexpr int get_number() const noexcept(true);

        [[nodiscard]] constexpr integer &
        operator=(const integer &other) noexcept(true);

        [[nodiscard]] constexpr integer &
        operator=(integer &&other) noexcept(true);
    };

} // namespace entity

namespace entity {
    /* friend: stream operator overloading */
    constexpr std::ostream &operator<<(std::ostream &os,
                                       const integer &other) noexcept(true) {
        return os << other.number_;
    }

    /* friend: swap function */
    constexpr void swap(integer &lhs, integer &rhs) noexcept(true) {
        using std::swap;
        swap(lhs.number_, rhs.number_);
    }

    /* friend: hash function */
    constexpr std::size_t hash_value(const integer &other) noexcept(true) {
        std::size_t seed{0x25DF850EU};
        seed ^= (seed << 6) + (seed >> 2) + 0x85AE25DDU +
                static_cast<std::size_t>(other.number_);
        return seed;
    }

    /* equality operator */
    constexpr bool operator==(const integer &lhs,
                              const integer &rhs) noexcept(true) {
        return (lhs.number_ == rhs.number_);
    }

    constexpr bool operator==(const int lhs,
                              const integer &rhs) noexcept(true) {
        return (lhs == rhs.number_);
    }

    constexpr auto operator<=>(const integer &lhs, const integer &rhs) {
        return (lhs.number_ <=> rhs.number_);
    }

    constexpr auto operator<=>(const int lhs, const integer &rhs) {
        return (lhs <=> rhs.number_);
    }


    /* default constructor */
    constexpr integer::integer() noexcept(true) : integer{0} {}

    /* parameterized constructor */
    constexpr integer::integer(const int number_param) noexcept(true) :
        number_{number_param} {}

    /* copy constructor */
    constexpr integer::integer(const integer &other) noexcept(true) :
        integer{other.number_} {}

    /* move constructor */
    constexpr integer::integer(integer &&other) noexcept(true) :
        integer{std::exchange(other.number_, 0)} {}

    /* setter */
    constexpr void integer::set_number(const int number_param) noexcept(true) {
        number_ = number_param;
    }

    /* getter */
    constexpr int integer::get_number() const noexcept(true) { return number_; }

    /* copy equal operator overloading */
    constexpr integer &integer::operator=(const integer &other) noexcept(true) {
        if (this != &other) {
            number_ = other.number_;
        }
        return *this;
    }

    /* move equal operator overloading */
    constexpr integer &integer::operator=(integer &&other) noexcept(true) {
        if (this != &other) {
            number_ = std::exchange(other.number_, 0);
        }
        return *this;
    }

} // namespace entity

#endif
