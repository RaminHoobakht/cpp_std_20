#include "bulldog.hpp"

namespace nelson {

    bulldog::bulldog() noexcept(true) = default;

    bulldog::~bulldog() noexcept(true) = default;

    void bulldog::init_stream(std::ostream &out) const noexcept(true) {
        out << "I am Bulldog ... (Polymorphism) ...";
    }

} // namespace nelson
