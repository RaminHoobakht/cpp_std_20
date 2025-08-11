#include "circle.hpp"


namespace albert {

    circle::circle() noexcept(true) = default;

    circle::circle(double radius_param,
                   std::string_view desc_param) noexcept(true) :
        oval{0.0, 0.0, desc_param}, m_radius_{radius_param} {}

    circle::~circle() noexcept(true) = default;

    void circle::draw() const noexcept(true) {
        std::cout << " circle::draw() is called. drawing: " << m_description_
                  << " with radius: " << m_radius_ << nl;
    }


} // namespace albert
