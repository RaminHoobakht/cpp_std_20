#include "stream_inserttable.hpp"


namespace ramin {

    std::ostream &operator<<(std::ostream &out,
                             const stream_inserttable &other) noexcept(true) {
        other.init_stream(out);
        return out;
    }

    stream_inserttable::~stream_inserttable() noexcept(true) = default;

} // namespace ramin
