#include "ellipse.hpp"


namespace nelson {

    int ellipse::m_count{0};

    ellipse::ellipse() noexcept(true) : ellipse{0.0, 0.0, ""} {}

    ellipse::ellipse(double x_radius_param, double y_radius_param,
                     std::string_view desc_param) noexcept(true) :
        shape{desc_param}, m_x_radius_{x_radius_param},
        m_y_radius_{y_radius_param} {
        m_count++;
    }

    ellipse::~ellipse() noexcept(true) { m_count--; }

    int ellipse::get_count() const noexcept(true) { return m_count; }

} // namespace nelson
