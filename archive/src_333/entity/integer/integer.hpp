#ifndef INTEGER_HPP
#define INTEGER_HPP

#pragma once

#include <ostream>
#include <utility>
#include <compare>

namespace entity {
    /* integer class. it cannot be inherited */

    class integer final {
    private:
        /* friend: stream overloading */
        friend std::ostream &operator<<(std::ostream &os, const integer &other) noexcept(true);

        /* friend: swap function */
        friend void swap(integer &lhs, integer &rhs) noexcept(true);

        /* friend hash function */
        friend std::size_t hash_value(const integer &other) noexcept(true);

        /* equality overloading */
        friend bool operator==(const integer &lhs, const integer &rhs) noexcept(true);

        friend bool operator==(int lhs, const integer &rhs) noexcept(true);

        /* three-way comparison overloading */
        friend auto operator<=>(const integer &lhs, const integer &rhs) noexcept(true);

        friend auto operator<=>(int lhs, const integer &rhs) noexcept(true);

    private:
        /* an int data-type field */
        int number_{};

    public:
        /* default constructor */
        integer() noexcept(true);

        /* parameterized constructor. not explicit */
        integer(int number_param) noexcept(true);

        /* copy constructor */
        integer(const integer &other) noexcept(true);

        /* move constructor */
        integer(integer &&other) noexcept(true);

        /* destructor */
        ~integer() noexcept(true) = default;

        /* setter */
        [[maybe_unused]] void set_number(int number_param) noexcept(true);

        /* getter */
        [[nodiscard]] int get_number() const noexcept(true);

        /* copy equal overloading */
        integer &operator=(const integer &other) noexcept(true);

        /* move equal overloading */
        integer &operator=(integer &&other) noexcept(true);
    };

    /* equality overloading */
    inline bool operator==(const integer &lhs, const integer &rhs) noexcept(true) {
        return (lhs.number_ == rhs.number_);
    }

    inline bool operator==(const int lhs, const integer &rhs) noexcept(true) {
        return (lhs == rhs.number_);
    }

    /* three-way comparison overloading */
    inline auto operator<=>(const integer &lhs, const integer &rhs) noexcept(true) {
        return (lhs.get_number() <=> rhs.get_number());
    }

    inline auto operator<=>(const int lhs, const integer &rhs) noexcept(true) {
        return (lhs <=> rhs.get_number());
    }
}


#endif //INTEGER_HPP
