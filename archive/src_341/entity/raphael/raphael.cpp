#include "raphael.hpp"


namespace inh {


    /* default constructor */
    raphael::raphael() noexcept(true) : raphael{zero, zero} {}


    /* parameterized constructor */
    raphael::raphael(const unsigned int a_param,
                     const unsigned int b_param) noexcept(true) :
        m_a_{a_param}, m_b_{b_param} {}

    /* copy constructor */
    raphael::raphael(const raphael &other) noexcept(true) :
        raphael{other.m_a_, other.m_b_} {}

    /* move constructor */
    raphael::raphael(raphael &&other) noexcept(true) :
        raphael{std::exchange(other.m_a_, zero),
                std::exchange(other.m_b_, zero)} {}


    /* setter */
    void raphael::set_a(const unsigned int a_param) noexcept(true) {
        m_a_ = a_param;
    }

    void raphael::set_b(unsigned int b_param) noexcept(true) { m_b_ = b_param; }

    /* getter */
    unsigned int raphael::get_a() const noexcept(true) { return m_a_; }

    unsigned int raphael::get_b() const noexcept(true) { return m_b_; }

    /* copy equality operator overloading */
    raphael &raphael::operator=(const raphael &other) noexcept(true) {
        if (this != &other) {
            m_a_ = other.m_a_;
            m_b_ = other.m_b_;
        }
        return *this;
    }

    /* move equality operator overloading */
    raphael &raphael::operator=(raphael &&other) noexcept(true) {
        if (this != &other) {
            m_a_ = std::exchange(other.m_a_, zero);
            m_b_ = std::exchange(other.m_b_, zero);
        }
        return *this;
    }


    /* friend ---------------------------------------- */


    /* out stream operator overloading (friend function) */
    std::ostream &operator<<(std::ostream &out,
                             const raphael &other) noexcept(true) {
        return out << "{ "
                   << "m_a_:" << other.m_a_ << ", "
                   << "m_b_:" << other.m_b_ << " }";
    }

    /* if equal operator overloading (friend function) */
    bool operator==(const raphael &lhs, const raphael &rhs) noexcept(true) {
        return (lhs.m_a_ == rhs.m_a_) && (lhs.m_b_ == rhs.m_b_);
    }

    /* if not equal operator overloading (friend function) */
    bool operator!=(const raphael &lhs, const raphael &rhs) noexcept(true) {
        return !(lhs == rhs);
    }

    /* three way comparison operator overloading (friend function) */
    // auto operator<=>(const raphael &lhs,
    //                        const raphael &rhs) noexcept(true) = default;

    /* swap (friend function) */
    void swap(raphael &lhs, raphael rhs) noexcept(true) {
        using std::swap;
        swap(lhs.m_a_, rhs.m_a_);
        swap(lhs.m_b_, rhs.m_b_);
    }

    /* hash value (friend function) */
    std::size_t hash_value(const raphael &other) noexcept(true) {
        std::size_t seed{0x85FF45EDU};
        seed ^= (seed << 6) + (seed >> 2) + 0x49ABEF88U +
                static_cast<std::size_t>(other.m_a_);
        seed ^= (seed << 6) + (seed >> 2) + 0xAACDEE39U +
                static_cast<std::size_t>(other.m_a_);
        return seed;
    }


} // namespace inh
