#include "pigeon.hpp"

namespace nelson {

    pigeon::pigeon() noexcept(true) = default;

    pigeon::pigeon(std::string_view wing_color_param,
                   std::string_view desc_param) noexcept(true) :
        bird{wing_color_param, desc_param} {}

    pigeon::~pigeon() noexcept(true) = default;

    void pigeon::breathe() const noexcept(true) {
        std::cout << "pigeon::breathe() was called for: " << m_description_
                  << '\n';
    }

    void pigeon::fly() const noexcept(true) {
        std::cout << "pigeon::fly() was called for: " << m_description_ << '\n';
    }

    void pigeon::coo() const noexcept(true) {
        std::cout << "pigeon::coo() was called for: " << m_description_ << '\n';
    }

} // namespace nelson
