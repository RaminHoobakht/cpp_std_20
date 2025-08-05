#include "samuel.hpp"


namespace inh {


    /* public ----------------------------------------------- */

    /* default constructor */
    samuel::samuel() noexcept(true) : samuel{zero, zero, zero, zero} {}

    /* parameterized constructor */
    samuel::samuel(const unsigned int c_param,
                   const unsigned int d_param) noexcept(true) :
        samuel{zero, zero, c_param, d_param} {}


    samuel::samuel(const unsigned int a_param, const unsigned int b_param,
                   const unsigned int c_param,
                   const unsigned int d_param) noexcept(true) :
        raphael{a_param, b_param}, m_c_{c_param}, m_d_{d_param} {};

    /* copy constructor */
    samuel::samuel(const samuel &other) noexcept(true) :
        raphael{other}, m_c_{other.m_c_}, m_d_{other.m_d_} {}


    /* move constructor */
    samuel::samuel(samuel &&other) noexcept(true) :
        raphael{std::move(other)}, m_c_{std::exchange(other.m_c_, zero)},
        m_d_{std::exchange(other.m_d_, zero)} {}

    /* destructor */
    // samuel::~samuel() noexcept(true) = default;

    /* setter */
    void samuel::set_c(const unsigned int c_param) noexcept(true) {
        m_c_ = c_param;
    }

    void samuel::set_d(const unsigned int d_param) noexcept(true) {
        m_d_ = d_param;
    }

    /* getter */
    unsigned int samuel::get_c() const noexcept(true) { return m_c_; }

    unsigned int samuel::get_d() const noexcept(true) { return m_d_; }

    /* copy equality operator overloading */
    samuel &samuel::operator=(const samuel &other) noexcept(true) {
        if (this != &other) {
            (void) raphael::operator=(other);
            m_c_ = other.m_c_;
            m_d_ = other.m_d_;
        }
        return *this;
    }

    /* move equality operator overloading */
    samuel &samuel::operator=(samuel &&other) noexcept(true) {
        if (this != &other) {
            (void) raphael::operator=(std::move(other));
            m_c_ = std::exchange(other.m_c_, zero);
            m_d_ = std::exchange(other.m_d_, zero);
        }
        return *this;
    }


    /* private  --------------------------------------- */
    /* out stream operator overloading ( function) */

    std::ostream &operator<<(std::ostream &out,
                             const samuel &other) noexcept(true) {
        return out << "{ "
                   << "m_a_:" << other.get_a() << ", "
                   << "m_b_:" << other.get_b() << ", "
                   << "m_d_:" << other.get_c() << ", "
                   << "m_d_:" << other.get_d() << " }";
    }

    /* logic equality operator overloading ( function) */
    bool operator==(const samuel &lhs, const samuel &rhs) noexcept(true) {
        return (static_cast<const raphael &>(lhs) ==
                static_cast<const raphael &>(rhs)) &&
               (lhs.m_c_ == rhs.m_c_) && (lhs.m_d_ == rhs.m_d_);
    }


    /* logic not equality operator overloading ( function) */
    bool operator!=(const samuel &lhs, const samuel &rhs) noexcept(true) {
        return !(lhs == rhs);
    }

    /* three-way comparison operator overloading ( function) */
    // auto operator<=>(const samuel &lhs,
    //                  const samuel &rhs) noexcept(true) = default;


    /* swap ( function) */
    void swap(samuel &lhs, samuel &rhs) noexcept(true) {
        using std::swap;
        swap(static_cast<raphael &>(lhs), static_cast<raphael &>(rhs));
        swap(lhs.m_c_, rhs.m_c_);
        swap(lhs.m_d_, rhs.m_d_);
    }

    /* hash value ( function) */
    std::size_t has_value(const samuel &other) noexcept(true) {
        std::size_t seed{0x85EDABEU};
        seed ^= (seed << 6) + (seed >> 2) + 0x2500ABECU +
                hash_value(static_cast<const raphael &>(other));
        seed ^= (seed << 6) + (seed >> 2) + 0x44EF25ABU +
                static_cast<std::size_t>(other.get_c());
        seed ^= (seed << 6) + (seed >> 2) + 0x88EF93ABU +
                static_cast<std::size_t>(other.get_d());
        return seed;
    }


} // namespace inh
