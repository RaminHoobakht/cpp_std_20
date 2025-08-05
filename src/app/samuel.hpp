#ifndef HEADERSAMUELHPP
#define HEADERSAMUELHPP

#pragma once

#include "raphael.hpp"


namespace inh {

    class samuel : public raphael {


    private:
        friend std::ostream &operator<<(std::ostream &out,
                                        const samuel &other) noexcept(true);

        friend bool operator==(const samuel &lhs,
                               const samuel &rhs) noexcept(true);

        friend bool operator!=(const samuel &lhs,
                               const samuel &rhs) noexcept(true);

        friend auto operator<=>(const samuel &lhs,
                                const samuel &rhs) noexcept(true) = default;

        friend void swap(samuel &lhs, samuel &rhs) noexcept(true);

        friend std::size_t hash_value(const samuel &other) noexcept(true);

    private:
        unsigned int m_c_{};
        unsigned int m_d_{};

    public:
        samuel() noexcept(true);

        samuel(unsigned int c_param, unsigned int d_param) noexcept(true);

        samuel(unsigned int a_param, unsigned int b_param,
               unsigned int c_param) noexcept(true);

        samuel(unsigned int a_param, unsigned int b_param, unsigned c_param,
               unsigned int d_param) noexcept(true);

        samuel(const samuel &other) noexcept(true);

        samuel(samuel &&other) noexcept(true);

        ~samuel() noexcept(true) = default;

        [[maybe_unused]] void set_c(unsigned int c_param) noexcept(true);
        [[maybe_unused]] void set_d(unsigned int d_param) noexcept(true);

        [[nodiscard]] unsigned int get_c() const noexcept(true);
        [[nodiscard]] unsigned int get_d() const noexcept(true);

        samuel &operator=(const samuel &other) noexcept(true);
        samuel &operator=(samuel &&other) noexcept(true);
    };

} // namespace inh


#endif
