#include "raphael.hpp"


namespace inh {


    /* friends ------------------------ */

    std::ostream &operator<<(std::ostream &out,
                             const raphael &other) noexcept(true) {
        return out << "{ "
                   << "m_a_:" << other.get_a() << ", "
                   << "m_b_:" << other.get_b() << " }";
    }

    bool operator==(const raphael &lhs, const raphael &rhs) noexcept(true) {
        return ((lhs.m_a_ == rhs.m_a_) && (rhs.m_b_ == rhs.m_b_));
    }

    bool operator!=(const raphael &lhs, const raphael &rhs) noexcept(true) {
        return !(lhs == rhs);
    }

    void swap(raphael &lhs, raphael &rhs) noexcept(true) {
        using std::swap;
        swap(lhs.m_a_, rhs.m_a_);
        swap(lhs.m_b_, rhs.m_b_);
    }

    std::size_t hash_value(const raphael &other) noexcept(true) {
        std::size_t seed{0xAB86FA0EU};
        seed ^= (seed << 6) + (seed > 2) + 0x8486EA0EU +
                static_cast<std::size_t>(other.m_a_);
        seed ^= (seed << 6) + (seed > 2) + 0x2599EA0EU +
                static_cast<std::size_t>(other.m_b_);
        return seed;
    }

    /* public ------------------------- */
    raphael::raphael() noexcept(true) : raphael{zero, zero} {}

    raphael::raphael(const unsigned int a_param,
                     const unsigned int b_param) noexcept(true) :
        m_a_{a_param}, m_b_{b_param} {}


    raphael::raphael(const raphael &other) noexcept(true) :
        raphael{other.m_a_, other.m_b_} {}

    raphael::raphael(raphael &&other) noexcept(true) :
        raphael{std::exchange(other.m_a_, zero),
                std::exchange(other.m_b_, zero)} {}


    void raphael::set_a(const unsigned int a_param) noexcept(true) { m_a_ = a_param; }

    void raphael::set_b(const unsigned int b_param) noexcept(true) { m_b_ = b_param; }

    unsigned int raphael::get_a() const noexcept(true) { return m_a_; }

    unsigned int raphael::get_b() const noexcept(true) { return m_b_; }

    raphael &raphael::operator=(const raphael &other) noexcept(true) {
        if (this != &other) {
            m_a_ = other.m_a_;
            m_b_ = other.m_b_;
        }
        return *this;
    }

    raphael &raphael::operator=(raphael &&other) noexcept(true) {
        if (this != &other) {
            m_a_ = std::exchange(other.m_a_, zero);
            m_b_ = std::exchange(other.m_b_, zero);
        }
        return *this;
    }

} // namespace inh
