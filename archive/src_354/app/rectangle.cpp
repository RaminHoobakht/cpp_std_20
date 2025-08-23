#include "rectangle.hpp"


namespace ramin {

    rectangle::rectangle() noexcept(true) = default;

    rectangle::rectangle(const double width_param, const double height_param,
                         const std::string_view desc_param) noexcept(true) :
        shape{desc_param}, m_width_{width_param}, m_height_{height_param} {}

    rectangle::~rectangle() noexcept(true) = default;

    double rectangle::perimeter() const noexcept(true) {
        return (2 * m_width_) + (2 * m_height_);
    }

    double rectangle::surface() const noexcept(true) {
        return m_width_ * m_height_;
    }

} // namespace ramin
