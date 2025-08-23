#include "animal.hpp"


namespace nelson {

    animal::animal() noexcept(true) = default;

    animal::animal(const std::string_view desc_param) noexcept(true) :
        m_description_{desc_param} {}

    animal::~animal() noexcept(true) = default;

    void animal::breathe() const noexcept(true) {
        std::cout << "animal::breathe() was called for: " << m_description_
                  << '\n';
    }

    void animal::init_stream(std::ostream &out) const noexcept(true) {
        out << "{ "
            << "m_description_:" << m_description_ << " }";
    }

} // namespace nelson
