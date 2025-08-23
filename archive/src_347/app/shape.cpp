#include "shape.hpp"


namespace ramin {

    shape::shape() noexcept(true) = default;

    shape::shape(const std::string_view desc_param) noexcept(true) :
        m_description_{desc_param} {}

    shape::~shape() noexcept(true) = default;

    void shape::draw() const noexcept(true) {
        std::cout << "shape::draw() was called. drawing: " << m_description_
                  << nl;
    }

    void shape::draw(const int color_depth) const noexcept(true) {
        std::cout << "shape::draw(int) was called. color depth is: "
                  << color_depth << nl;
    }


} // namespace ramin
