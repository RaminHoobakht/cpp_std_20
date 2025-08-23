#include "circle.hpp"


namespace ramin {


    circle::circle() noexcept(true) = default;

    circle::circle(const double radius_param,
                   const std::string_view desc_param) noexcept(true) :
        shape{desc_param}, m_radius_{radius_param} {}

    circle::~circle() noexcept(true) = default;

    double circle::perimeter() const noexcept(true) {
        return (2 * PI_ * m_radius_);
    }

    double circle::surface() const noexcept(true) {
        return (m_radius_ * m_radius_ * PI_);
    }


} // namespace ramin
