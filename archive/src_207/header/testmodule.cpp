#include "testmodule.hpp"

/* definition */
namespace cpp {

    template<>
    const char *maximum(const char *a, const char *b) noexcept {
        return (std::strcmp(a, b) > 0) ? a : b;
    }


} // namespace cpp
