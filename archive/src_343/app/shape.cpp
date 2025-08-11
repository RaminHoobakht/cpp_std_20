#include "shape.hpp"


namespace albert {

    shape::shape() noexcept(true) = default;

    shape::shape(const std::string_view desc_param) noexcept(true) :
        m_description_{desc_param} {}

    shape::~shape() noexcept(true) = default;

    void shape::draw() const noexcept(true) {
        std::cout << " shape::draw() called. drawing: " << m_description_ << nl;
    }

} // namespace albert
