#include "bird.hpp"


namespace nelson {

    bird::bird() noexcept(true) = default;

    bird::bird(const std::string_view wing_color_param,
               const std::string_view desc_param) noexcept(true) :
        animal{desc_param}, wing_color_{wing_color_param} {}

    bird::~bird() noexcept(true) = default;

    void bird::breathe() const noexcept(true) {
        std::cout << "bird::breathe() was called for: " << m_description_
                  << '\n';
    }

    void bird::fly() const noexcept(true) {
        std::cout << "bird::fly() was called for: " << m_description_ << '\n';
    }


} // namespace nelson
