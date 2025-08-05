#include "main.hpp"

/* how to use copy constructor in inheritance */
namespace albert {
    constexpr auto zero{0U};


    class raphael {
    private:
        friend std::ostream &operator<<(std::ostream &out,
                                        const raphael &other) noexcept(true) {
            return out << "{ "
                       << "m_a_:" << other.m_a_ << ", "
                       << "m_b_:" << other.m_b_ << " }";
        }

        friend bool operator==(const raphael &lhs,
                               const raphael &rhs) noexcept(true) {
            return ((lhs.m_a_ == rhs.m_a_) && (lhs.m_b_ == rhs.m_b_));
        }

        friend bool operator!=(const raphael &lhs,
                               const raphael &rhs) noexcept(true) {
            return !(lhs == rhs);
        }

        friend auto operator<=>(const raphael &,
                                const raphael &) noexcept(true) = default;

        friend void swap(raphael &lhs, raphael &rhs) noexcept(true) {
            using std::swap;
            swap(lhs.m_a_, rhs.m_a_);
            swap(lhs.m_b_, rhs.m_b_);
        }

        inline friend std::size_t
        hash_value(const raphael &other) noexcept(true) {
            size_t seed{0xADF7EDDU};
            seed ^= (seed << 6) + (seed >> 2) + 0xFD00AAE0U +
                    static_cast<std::size_t>(other.m_a_);
            seed ^= (seed << 6) + (seed >> 2) + 0x85BACDE0U +
                    static_cast<std::size_t>(other.m_b_);
            return seed;
        }

    private:
        unsigned int m_a_{};
        unsigned int m_b_{};

    public:
        raphael() noexcept(true) : raphael{zero, zero} {}

        explicit raphael(const unsigned int a_param) noexcept(true) :
            raphael{a_param, zero} {}

        raphael(const unsigned int a_param,
                const unsigned int b_param) noexcept(true) :
            m_a_{a_param}, m_b_{b_param} {}

        raphael(const raphael &other) noexcept(true) :
            raphael{other.m_a_, other.m_b_} {}

        raphael(raphael &&other) noexcept(true) :
            raphael{std::exchange(other.m_a_, zero),
                    std::exchange(other.m_b_, zero)} {}

        ~raphael() noexcept(true) = default;

        [[maybe_unused]] void set_a(const unsigned int a_param) noexcept(true) {
            m_a_ = a_param;
        }

        [[maybe_unused]] void set_b(const unsigned int b_param) noexcept(true) {
            m_b_ = b_param;
        }

        [[nodiscard]] unsigned int get_a() const noexcept(true) { return m_a_; }

        [[nodiscard]] unsigned int get_b() const noexcept(true) { return m_b_; }

        raphael &operator=(const raphael &other) noexcept(true) {
            if (this != &other) {
                m_a_ = other.m_a_;
                m_b_ = other.m_b_;
            }
            return *this;
        }

        raphael &operator=(raphael &&other) noexcept(true) {
            if (this != &other) {
                m_a_ = std::exchange(other.m_a_, zero);
                m_b_ = std::exchange(other.m_b_, zero);
            }
            return *this;
        }
    };

    /* -----------------------------------------------  */


    class samuel : public raphael {
    private:
        unsigned int m_c_{};
        unsigned int m_d_{};

    public:
        samuel() noexcept(true) : samuel{0U, 0U, 0U, 0U} {}

        explicit samuel(const unsigned int a_param) noexcept(true) :
            samuel{a_param, zero, zero, zero} {}

        samuel(const unsigned int c_param,
               const unsigned int d_param) noexcept(true) :
            samuel{zero, zero, c_param, d_param} {};

        samuel(const unsigned int a_param, const unsigned int b_param,
               const unsigned int c_param) noexcept(true) :
            samuel{a_param, b_param, c_param, zero} {};

        samuel(const unsigned int a_param, const unsigned int b_param,
               const unsigned int c_param,
               const unsigned int d_param) noexcept(true) :
            raphael{a_param, b_param}, m_c_{c_param}, m_d_{d_param} {}

        samuel(const samuel &other) noexcept(true) :
            raphael{other}, m_c_{other.m_c_}, m_d_{other.m_d_} {}

        samuel(samuel &&other) noexcept(true) :
            raphael{std::move(other)}, m_c_{std::exchange(other.m_c_, zero)},
            m_d_{std::exchange(other.m_d_, zero)} {}

        ~samuel() noexcept(true) = default;

        samuel &operator=(const samuel &other) noexcept(true) {
            if (this != &other) {
                set_a(other.get_a());
                set_b(other.get_b());
                m_c_ = other.m_c_;
                m_d_ = other.m_d_;
            }
            return *this;
        }

        samuel &operator=(samuel &&other) noexcept(true) {
            if (this != &other) {
                set_a(other.get_a());
                other.set_a(zero);

                set_b(other.get_b());
                other.set_b(zero);

                m_c_ = other.m_c_;
                m_d_ = other.m_d_;
            }
            return *this;
        }
    };
} // namespace albert


int main() {
 
    albert::samuel my_samuel{1,2,3,4};
    

    pout << "\n #(17:08:34): The End ..." << eln;
    return EXIT_SUCCESS;
}
