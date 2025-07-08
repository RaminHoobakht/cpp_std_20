#ifndef HEADER_INTEGER_HPP
#define HEADER_INTEGER_HPP

#pragma once

#include "integer_headers.hpp"

namespace entity {


    class integer final {

    private:
        int number_{};

    private:
        friend integer operator+(const integer &lhs,
                                 const integer &rhs) noexcept(true);
        friend integer operator-(const integer &lhs,
                                 const integer &rhs) noexcept(true);
        friend integer operator/(const integer &lhs,
                                 const integer &rhs) noexcept(true);
        friend integer operator*(const integer &lhs,
                                 const integer &rhs) noexcept(true);
        friend integer operator%(const integer &lhs,
                                 const integer &rhs) noexcept(true);

        friend std::ostream &operator<<(std::ostream &os,
                                        const integer &rhs) noexcept(true);

    public:
        integer() noexcept(true);
        integer(int number_param) noexcept(true);
        integer(const integer &rhs) noexcept(true);
        integer(integer &&rhs) noexcept(true);
        ~integer() noexcept(true);

    public:
        [[maybe_unused]] void set_number(int number_param) noexcept(true);
        [[nodiscard]] int get_integer() const noexcept(true);

    public:
        integer &operator=(const integer &rhs) noexcept(true);
        integer &operator=(integer &&rhs) noexcept(true);
    };


} // namespace entity


#endif /* HEADER_INTEGER_HPP */
