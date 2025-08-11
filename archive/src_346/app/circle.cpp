#include "circle.hpp"


namespace ramin {

    circle::circle() noexcept(true) = default;

    circle::circle(const double radius_param,
                   const std::string_view desc_param) noexcept(true) :
        oval{radius_param, radius_param, desc_param}, m_radius_{radius_param} {}

    circle::~circle() noexcept(true) = default;

    void circle::draw() const noexcept(true) {
        std::cout << "circle::draw() was called. drawing: " << m_description_
                  << " with radius: " << m_radius_ << nl;
    }

    void circle::draw(int color_depth) const noexcept(true) {
        std::cout << "circle::draw(int) color depth is: " << color_depth << nl;
    }


} // namespace ramin
