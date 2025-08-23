#include "shape.hpp"


namespace ramin {

    shape::shape() noexcept(true) = default;

    shape::shape(const std::string_view desc_param) noexcept(true) :
        m_description_{desc_param} {}

    shape::~shape() noexcept(true) = default;


} // namespace ramin
