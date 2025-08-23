#include "shape.hpp"


namespace nelson {


    int shape::m_count{0};

    shape::shape() noexcept(true) : shape{"No Shape Description"} {};

    shape::shape(std::string_view desc_param) noexcept(true) :
        m_description_{desc_param} {
        m_count++;
    }

    shape::~shape() noexcept(true) { m_count--; }

    int shape::get_count() const noexcept(true) { return m_count; }


} // namespace nelson
