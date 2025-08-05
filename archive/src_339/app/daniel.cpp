#include "daniel.hpp"

namespace inh {


    /* public members ------------------------------------------------ */

    /* default constructor */
    daniel::daniel() noexcept(true) :
        daniel{zero, zero, zero, zero, zero, zero} {}

    /* parameterized constructor */
    daniel::daniel(unsigned int e_param, unsigned int f_param) noexcept(true) :
        daniel{zero, zero, zero, zero, e_param, f_param} {}

    daniel::daniel(unsigned int c_param, unsigned int d_param,
                   unsigned int e_param, unsigned int f_param) noexcept(true) :
        daniel{zero, zero, c_param, d_param, e_param, f_param} {}

    daniel::daniel(unsigned int a_param, unsigned int b_param,
                   unsigned int c_param, unsigned int d_param,
                   unsigned int e_param, unsigned int f_param) noexcept(true) :
        samuel{a_param, b_param, c_param, d_param}, m_e_{e_param},
        m_f_{f_param} {}

    /* copy constructor */
    daniel::daniel(const daniel &other) noexcept(true) :
        samuel{other}, m_e_{other.m_e_}, m_f_{other.m_f_} {}

    /* move constructor */
    daniel::daniel(daniel &&other) noexcept(true) :
        samuel{other}, m_e_{std::exchange(other.m_e_, zero)},
        m_f_{std::exchange(other.m_f_, zero)} {}

    /* destructor */
    // daniel::~daniel() noexcept(true) = default;

    /* setter */
    void daniel::set_e(unsigned int e_param) noexcept(true) { m_e_ = e_param; }

    void daniel::set_f(unsigned int f_param) noexcept(true) { m_f_ = f_param; }

    /* getter */
    unsigned int daniel::get_e() const noexcept(true) { return m_e_; }

    unsigned int daniel::get_f() const noexcept(true) { return m_f_; }

    /* copy equality operator overloading */
    daniel &daniel::operator=(const daniel &other) noexcept(true) {
        if (this != &other) {
            (void) samuel::operator=(other);
            m_e_ = other.m_e_;
            m_f_ = other.m_f_;
        }
        return *this;
    }

    /* move equality operator overloading */
    daniel &daniel::operator=(daniel &&other) noexcept(true) {
        if (this != &other) {
            (void) samuel::operator=(std::move(other));
            m_e_ = std::exchange(other.m_e_, zero);
            m_f_ = std::exchange(other.m_f_, zero);
        }
        return *this;
    }

    /* private  members ---------------------------------------- */

    /* out stream operator overloading ( function) */
    std::ostream &operator<<(std::ostream &out,
                             const daniel &other) noexcept(true) {
        return out << "{ "
                   << "m_a_:" << other.get_a() << ", "
                   << "m_b_:" << other.get_b() << ", "
                   << "m_c_:" << other.get_c() << ", "
                   << "m_d_:" << other.get_d() << ", "
                   << "m_e_:" << other.get_e() << ", "
                   << "m_f_:" << other.get_f() << " }";
    }

    /* logical equality operator overloading ( function) */
    bool operator==(const daniel &lhs, const daniel &rhs) noexcept(true) {
        return (static_cast<const samuel &>(lhs) ==
                static_cast<const samuel &>(rhs)) &&
               (lhs.m_e_ == rhs.m_e_) && (lhs.m_f_ == rhs.m_f_);
    }


    /* logical not equality operator overloading ( function) */
    bool operator!=(const daniel &lhs, const daniel &rhs) noexcept(true) {
        return !(lhs == rhs);
    }

    /* three-way comparison operator overloading ( function) */
    // std::strong_ordering
    // operator<=>(const daniel &lhs, const daniel &rhs) noexcept(true) =
    // default;

    /* swap ( function) */
    void swap(daniel &lhs, daniel &rhs) noexcept(true) {
        using std::swap;
        swap(static_cast<samuel &>(lhs), static_cast<const samuel &>(rhs));
        swap(lhs.m_e_, rhs.m_e_);
        swap(lhs.m_f_, rhs.m_f_);
    }

    /* hash value ( function) */
    std::size_t has_value(const daniel &other) noexcept(true) {
        std::size_t seed{0x85FDAED9U};
        seed ^= (seed << 6) + (seed >> 2) + 0x79BCAED9U +
                hash_value(static_cast<const samuel &>(other));
        seed ^= (seed << 6) + (seed >> 2) + 0x79BCAED9U +
                static_cast<std::size_t>(other.m_e_);
        seed ^= (seed << 6) + (seed >> 2) + 0xADEE41D9U +
                static_cast<std::size_t>(other.m_f_);
        return seed;
    }


} // namespace inh
