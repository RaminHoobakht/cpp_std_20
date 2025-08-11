#include "circle.hpp"

namespace albert {
    circle::circle() noexcept(true) {
        std::cout << "Hello, I am circle class ..." << '\n';
    }

    circle::circle(const double radius_param, const std::string_view description_param) noexcept(true)
        : oval(0.0, 0.0, description_param),
          radius_(radius_param) {
    }

    circle::~circle() noexcept(true) {
        std::cout << "Goodbye circle ..." << '\n';
    }

    void circle::draw() const noexcept(true) {
        std::cout << "circle::draw() called. drawing: "
                << m_description_ << "with radius: " << radius_ << '\n';
    }
}
