#include "oval.hpp"

namespace albert {


    oval::oval() noexcept(true) = default;

    oval::oval(const double x_radius_param, const double y_radius_param,
               const std::string_view desc_param) noexcept(true) :
        shape{desc_param}, m_x_radius_{x_radius_param},
        m_y_radius_{y_radius_param} {}

    oval::~oval() noexcept(true) = default;

    void oval::draw() const noexcept(true) {
        std::cout << " oval::draw() called. drawing: " << m_description_
                  << " with x radius: " << m_x_radius_
                  << " and y radius: " << m_y_radius_ << nl;
    }


} // namespace albert
