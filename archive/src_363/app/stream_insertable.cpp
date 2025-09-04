#include "stream_insertable.hpp"

namespace si {

    std::ostream &operator<<(std::ostream &out,
                             stream_insertable &other) noexcept(true) {
        other.init_stream(out);
        return out;
    }

    stream_insertable::~stream_insertable() noexcept(true) = default;

} // namespace si
