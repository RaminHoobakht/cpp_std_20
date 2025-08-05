#include "samuel.hpp"

namespace inh {

    samuel::samuel() noexcept(true) : samuel{zero, zero, zero, zero} {};

    samuel::samuel(const unsigned int c_param,
                   const unsigned int d_param) noexcept(true) :
        samuel{zero, zero, c_param, d_param} {}

    samuel::samuel(const unsigned int a_param, const unsigned int b_param,
                   const unsigned int c_param) noexcept(true) :
        samuel{a_param, b_param, c_param, zero} {}

    samuel::samuel(unsigned int a_param, unsigned int b_param, unsigned c_param,
                   unsigned int d_param) noexcept(true) {}


    // samuel::samuel(const unsigned int a_param, const unsigned int b_param,
    //                const unsigned c_param,
    //                const unsigned int d_param) noexcept(true) :
    //     raphael{a_param, b_param}, m_c_{c_param}, m_d_{d_param} {};


    samuel::samuel(const samuel &other) noexcept(true) :
        raphael{other}, m_c_{other.m_c_}, m_d_{other.m_d_} {}

    samuel::samuel(samuel &&other) noexcept(true) :
        raphael{other}, m_c_{std::exchange(other.m_c_, zero)},
        m_d_{std::exchange(other.m_d_, zero)} {}


    void samuel::set_c(const unsigned int c_param) noexcept(true) {
        m_c_ = c_param;
    }

    void samuel::set_d(const unsigned int d_param) noexcept(true) {
        m_d_ = d_param;
    };


    unsigned int samuel::get_c() const noexcept(true) { return m_c_; }

    unsigned int samuel::get_d() const noexcept(true) { return m_d_; }

    samuel &samuel::operator=(const samuel &other) noexcept(true) {
        if (this != &other) {
            (void)raphael::operator=(other);
            m_c_ = other.m_c_;
            m_d_ = other.m_d_;
        }
        return *this;
    }

    samuel &samuel::operator=(samuel &&other) noexcept(true) {
        if (this != &other) {
            (void)raphael::operator=(std::move(other));
            m_c_ = other.m_c_;
            m_d_ = other.m_d_;
        }
        return *this;
    }


    /* friend --------------------------------------- */


    std::ostream &operator<<(std::ostream &out,
                             const samuel &other) noexcept(true) {
        return out << "{ "
                   << "m_a_:" << other.get_a() << ", "
                   << "m_b_:" << other.get_b() << ", "
                   << "m_c_:" << other.get_c() << ", "
                   << "m_d_:" << other.get_d() << " }";
    };


    bool operator==(const samuel &lhs, const samuel &rhs) noexcept(true) {
        return (raphael{lhs} == raphael{rhs}) && (lhs.m_c_ == rhs.m_c_) &&
               (lhs.m_d_ == rhs.m_d_);
    }


    bool operator!=(const samuel &lhs, const samuel &rhs) noexcept(true) {
        return !(lhs == rhs);
    }


    void swap(samuel &lhs, samuel &rhs) noexcept(true) {
        using std::swap;
        auto r1{static_cast<raphael>(lhs)};
        auto r2{static_cast<raphael>(rhs)};
        swap(r1, r2);
        swap(lhs.m_c_, rhs.m_d_);
    }

    std::size_t hash_value(const samuel &other) noexcept(true) {
        const auto r1{static_cast<raphael>(other)};
        std::size_t seed{hash_value(r1)};
        seed ^= (seed << 6) + (seed >> 2) + 0x44EF25ABU +
                static_cast<std::size_t>(other.m_c_);
        seed ^= (seed << 6) + (seed >> 2) + 0x88EF93ABU +
                static_cast<std::size_t>(other.m_d_);
        return seed;
    }

} // namespace inh
