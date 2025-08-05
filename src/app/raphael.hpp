#ifndef HEADER_RAPHAEL_HPP
#define HEADER_RAPHAEL_HPP

#pragma once

#include <compare>
#include <ostream>
#include <utility>

namespace inh {

    constexpr auto zero{0U};

    class raphael {

    private:
        friend std::ostream &operator<<(std::ostream &out,
                                        const raphael &other) noexcept(true);

        friend bool operator==(const raphael &lhs,
                               const raphael &rhs) noexcept(true);

        friend bool operator!=(const raphael &lhs,
                               const raphael &rhs) noexcept(true);

        friend std::strong_ordering
        operator<=>(const raphael &lhs,
                    const raphael &rhs) noexcept(true) = default;

        friend void swap(raphael &lhs, raphael &rhs) noexcept(true);

        friend std::size_t hash_value(const raphael &other) noexcept(true);

    private:
        unsigned int m_a_{};
        unsigned int m_b_{};


    public:
        raphael() noexcept(true);
        raphael(unsigned int a_param, unsigned int b_param) noexcept(true);
        raphael(const raphael &other) noexcept(true);
        raphael(raphael &&other) noexcept(true);
        ~raphael() noexcept(true) = default;

        [[maybe_unused]] void set_a(unsigned int a_param) noexcept(true);
        [[maybe_unused]] void set_b(unsigned int b_param) noexcept(true);

        [[nodiscard]] unsigned int get_a() const noexcept(true);
        [[nodiscard]] unsigned int get_b() const noexcept(true);

        raphael &operator=(const raphael &other) noexcept(true);
        raphael &operator=(raphael &&other) noexcept(true);
    };

} // namespace inh

#endif
