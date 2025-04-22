#include "cpptrain.hpp"

/* definition */
namespace cpp {

    template<typename T>
    T maximum(T a, T b) noexcept {
        return (a > b) ? a : b;
    }

    template<typename T>
    const T &maximum(const T &a, const T &b) noexcept {
        return (a > b) ? a : b;
    }


} // namespace cpp
