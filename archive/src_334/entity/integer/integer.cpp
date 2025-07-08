#include "integer.hpp"

namespace entity {
//     /* friend: stream operator overloading */
//     std::ostream &operator<<(std::ostream &os, const integer &other) noexcept(true) {
//         return os << other.number_;
//     }
// 
//     /* friend: swap function */
//     void swap(integer &lhs, integer &rhs) noexcept(true) {
//         using std::swap;
//         swap(lhs.number_, rhs.number_);
//     }
// 
//     /* friend: hash function */
//     std::size_t hash_value(const integer &other) noexcept(true) {
//         std::size_t seed{0x25DF850EU};
//         seed ^= (seed << 6) + (seed >> 2) + 0x85AE25DDU + static_cast<std::size_t>(other.number_);
//         return seed;
//     }
// 
//     /* default constructor */
//     integer::integer() noexcept(true) : integer{0} {
//     }
// 
//     /* parameterized constructor */
//     integer::integer(const int number_param) noexcept(true)
//         : number_{number_param} {
//     }
// 
//     /* copy constructor */
//     integer::integer(const integer &other) noexcept(true)
//         : integer{other.number_} {
//     }
// 
//     /* move constructor */
//     integer::integer(integer &&other) noexcept(true)
//         : integer{std::exchange(other.number_, 0)} {
//     }
// 
//     /* setter */
//     void integer::set_number(const int number_param) noexcept(true) {
//         number_ = number_param;
//     }
// 
//     /* getter */
//     int integer::get_number() const noexcept(true) {
//         return number_;
//     }
// 
//     /* copy equal operator overloading */
//     integer &integer::operator=(const integer &other) noexcept(true) {
//         if (this != &other) {
//             number_ = other.number_;
//         }
//         return *this;
//     }
// 
//     /* move equal operator overloading */
//     integer &integer::operator=(integer &&other) noexcept(true) {
//         if (this != &other) {
//             number_ = std::exchange(other.number_, 0);
//         }
//         return *this;
//     }
}
