#ifndef INTEGER_HPP
#define INTEGER_HPP

#include <ostream>
#include <utility>
#include <compare>

namespace entity {
    class integer final {
    private:
        /* stream operator overloading */
        friend std::ostream &operator<<(std::ostream &os, const integer &other) noexcept(true);

        /* equality operator overloading */
        friend bool operator==(const integer &lhs, const integer &rhs) noexcept(true);
        friend bool operator==(int lhs, const integer &rhs) noexcept(true);
        friend bool operator==(const integer &lhs, int rhs) noexcept(true);

        /* swap */
        friend void swap(integer &lhs, integer &rhs) noexcept(true);

        /* hash */
        friend std::size_t hash_value(const integer &obj);

    private:
        int number_{};

    public:
        /* default constructor */
        integer() noexcept(true);

        /* parameterized constructor */
        integer(int number_param) noexcept(true);

        /* copy constructor */
        integer(const integer &other) noexcept(true);

        /* move constructor */
        integer(integer &&other) noexcept(true);

        /* destructor */
        ~integer() noexcept(true) = default;

        /* setter */
        [[maybe_unused]] void set_number(int number_param) noexcept(true);

        /* getter */
        [[nodiscard]] int get_number() const noexcept(true);

        /* equal copy */
        integer &operator=(const integer &other) noexcept(true);

        /* equal move */
        integer &operator=(integer &&other) noexcept(true);

        /* relational operator overloading */
        auto operator<=>(const integer &) const = default;

        /* conversion to int overloading */
        operator int() const {
            return number_;
        }
    };
}

#endif //INTEGER_HPP
