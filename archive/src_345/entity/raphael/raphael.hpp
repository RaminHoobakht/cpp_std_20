#ifndef HEADER_RAPHAEL_HPP
#define HEADER_RAPHAEL_HPP

#pragma once

#include <ostream>
#include <utility>
#include <compare>

namespace inh {

    constexpr auto zero{0U};

    class raphael {

    private:
        /* out stream operator overloading (friend function) */
        friend std::ostream &operator<<(std::ostream &out, const raphael &other) noexcept(true);

        /* if equal operator overloading (friend function) */
        friend bool operator==(const raphael &lhs, const raphael &rhs) noexcept(true);

        /* if not equal operator overloading (friend function) */
        friend bool operator!=(const raphael &lhs, const raphael &rhs) noexcept(true);

        /* three way comparison operator overloading (friend function) */
        friend auto operator<=>(const raphael &lhs, const raphael &rhs) noexcept(true) = default;

        /* swap (friend function) */
        friend void swap(raphael &lhs, raphael rhs) noexcept(true);

        /* hash value (friend function) */
        friend std::size_t hash_value(const raphael &other) noexcept(true);

    private:
        unsigned int m_a_{};
        unsigned int m_b_{};

    public:
        /* default constructor */
        raphael() noexcept(true);


        /* parameterized constructor */
        raphael(unsigned int a_param, unsigned int b_param) noexcept(true);

        /* copy constructor */
        raphael(const raphael &other) noexcept(true);

        /* move constructor */
        raphael(raphael &&other) noexcept(true);

        /* destructor */
        ~raphael() noexcept(true) = default;

        /* setter */
        [[maybe_unused]] void set_a(unsigned int a_param) noexcept(true);
        [[maybe_unused]] void set_b(unsigned int b_param) noexcept(true);

        /* getter */
        [[nodiscard]] unsigned int get_a() const noexcept(true);
        [[nodiscard]] unsigned int get_b() const noexcept(true);

        /* copy equality operator overloading */
        raphael &operator=(const raphael &other) noexcept(true);

        /* move equality operator overloading */
        raphael &operator=(raphael &&other) noexcept(true);
    };


} // namespace inh


#endif
