#ifndef DANIEL_HPP
#define DANIEL_HPP

#pragma once

#include "samuel.hpp"

namespace inh {

    class daniel : public samuel {

    private:
        /* out stream operator overloading (friend function) */
        friend std::ostream &operator<<(std::ostream &out,
                                        const daniel &other) noexcept(true);

        /* logical equality operator overloading (friend function) */
        friend bool operator==(const daniel &lhs,
                               const daniel &rhs) noexcept(true);


        /* logical not equality operator overloading (friend function) */
        friend bool operator!=(const daniel &lhs,
                               const daniel &rhs) noexcept(true);

        /* three-way comparison operator overloading (friend function) */
        friend std::strong_ordering
        operator<=>(const daniel &lhs,
                    const daniel &rhs) noexcept(true) = default;

        /* swap (friend function) */
        friend void swap(daniel &lhs, daniel &rhs) noexcept(true);

        /* hash value (friend function) */
        friend std::size_t has_value(const daniel &other) noexcept(true);


    private:
        unsigned int m_e_{};
        unsigned int m_f_{};

    public:
        /* default constructor */
        daniel() noexcept(true);

        /* parameterized constructor */
        daniel(unsigned int c_param, unsigned int d_param) noexcept(true);

        daniel(unsigned int c_param, unsigned int d_param, unsigned int e_param,
               unsigned int f_param) noexcept(true);

        daniel(unsigned int a_param, unsigned int b_param, unsigned int c_param,
               unsigned int d_param, unsigned int e_param,
               unsigned int f_param) noexcept(true);

        /* copy constructor */
        daniel(const daniel &other) noexcept(true);

        /* move constructor */
        daniel(daniel &&other) noexcept(true);

        /* destructor */
        ~daniel() noexcept(true) = default;

        /* setter */
        [[maybe_unused]] void set_e(unsigned int) noexcept(true);
        [[maybe_unused]] void set_f(unsigned int) noexcept(true);

        /* getter */
        [[nodiscard]] unsigned int get_e() const noexcept(true);
        [[nodiscard]] unsigned int get_f() const noexcept(true);

        /* copy equality operator overloading */
        daniel &operator=(const daniel &other) noexcept(true);

        /* move equality operator overloading */
        daniel &operator=(daniel &&other) noexcept(true);
    };

} // namespace inh

#endif
