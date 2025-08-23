#include "cat.hpp"


namespace ramin {

    cat::cat() noexcept(true) = default;

    cat::cat(const std::string_view fur_style_param,
             const std::string_view desc_param) noexcept(true) :
        feline{fur_style_param, desc_param} {};

    cat::~cat() noexcept(true) = default;

    void cat::breathe() const noexcept(true) {
        std::cout << "cat::breathe was called for: " << m_description_ << '\n';
    }

    void cat::run() const noexcept(true) {
        std::cout << "cat::run() was called for: " << m_description_ << '\n';
    }

    void cat::miaw() const noexcept(true) {
        std::cout << "cat::miaw called for: " << m_description_ << '\n';
    }


} // namespace ramin
