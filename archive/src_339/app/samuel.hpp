#ifndef HEADER_SAMUEL_HPP
#define HEADER_SAMUEL_HPP

#pragma once

#include "raphael.hpp"

namespace inh {

    class samuel : public raphael {

    private:
        /* out stream operator overloading (friend function) */
        friend std::ostream &operator<<(std::ostream &out,
                                        const samuel &other) noexcept(true);

        /* logic equality operator overloading (friend function) */
        friend bool operator==(const samuel &lhs,
                               const samuel &rhs) noexcept(true);


        /* logic not equality operator overloading (friend function) */
        friend bool operator!=(const samuel &lhs,
                               const samuel &rhs) noexcept(true);

        /* three-way comparison operator overloading (friend function) */
        friend std::strong_ordering operator<=>(const samuel &lhs,
                                const samuel &rhs) noexcept(true) = default;

        /* swap (friend function) */
        friend void swap(samuel &lhs, samuel &rhs) noexcept(true);

        /* hash value (friend function) */
        friend std::size_t has_value(const samuel &other) noexcept(true);


    private:
        unsigned int m_c_{};
        unsigned int m_d_{};

    public:
        /* default constructor */
        samuel() noexcept(true);

        /* parameterized constructor */
        samuel(unsigned int c_param, unsigned int d_param) noexcept(true);
        samuel(unsigned int a_param, unsigned int b_param, unsigned int c_param,
               unsigned int d_param) noexcept(true);

        /* copy constructor */
        samuel(const samuel &other) noexcept(true);

        /* move constructor */
        samuel(samuel &&other) noexcept(true);

        /* destructor */
        ~samuel() noexcept(true) = default;

        /* setter */
        [[maybe_unused]] void set_c(unsigned int) noexcept(true);
        [[maybe_unused]] void set_d(unsigned int) noexcept(true);

        /* getter */
        [[nodiscard]] unsigned int get_c() const noexcept(true);
        [[nodiscard]] unsigned int get_d() const noexcept(true);

        /* copy equality operator overloading */
        samuel &operator=(const samuel &other) noexcept(true);

        /* move equality operator overloading */
        samuel &operator=(samuel &&other) noexcept(true);
    };


} // namespace inh


#endif
