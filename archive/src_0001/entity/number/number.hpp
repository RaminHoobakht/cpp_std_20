#ifndef NUMBER_HPP
#define NUMBER_HPP

#pragma once

#include "number_headers.hpp"

namespace entity {

    class number final {

    private:
        friend number operator+(const number &lhs,
                                const number &rhs) noexcept(true);
        friend number operator-(const number &lhs,
                                const number &rhs) noexcept(true);
        friend number operator/(const number &lhs,
                                const number &rhs) noexcept(true);
        friend number operator*(const number &lhs,
                                const number &rhs) noexcept(true);

    private:
        friend bool operator==(const number &lhs,
                               const number &rhs) noexcept(true);
        friend bool operator>(const number &lhs,
                              const number &rhs) noexcept(true);
        friend bool operator<(const number &lhs,
                              const number &rhs) noexcept(true);
        friend bool operator>=(const number &lhs,
                               const number &rhs) noexcept(true);
        friend bool operator<=(const number &lhs,
                               const number &rhs) noexcept(true);
        friend bool operator!=(const number &lhs,
                               const number &rhs) noexcept(true);


    private:
        friend std::ostream &operator<<(std::ostream &os,
                                        const number &lhs) noexcept(true);

    private:
        double num_{};


    public:
        number() noexcept(true);
        number(double num_param) noexcept(true);
        number(const number &lhs) noexcept(true);
        number(number &&lhs) noexcept(true);
        ~number() noexcept(true) = default;

        /* -------- */

        [[maybe_unused]] void set_number(double num_param) noexcept(true);
        [[nodiscard]] double get_number() const noexcept(true);

        /* -------- */

        number &operator=(const number &lhs) noexcept(true);
        number &operator=(number &&lhs) noexcept(true);
    };


} // namespace entity


#endif // NUMBER_HPP
