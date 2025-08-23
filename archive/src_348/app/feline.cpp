#include "feline.hpp"


namespace ramin {

    feline::feline() noexcept(true) = default;

    feline::feline(const std::string_view fur_style_param,
                   const std::string_view desc_param) noexcept(true) :
        animal{desc_param}, m_fur_style_{fur_style_param} {}

    feline::~feline() noexcept(true) = default;

    void feline::run() const noexcept(true) {
        std::cout << "feline: " << m_description_ << " is running ..." << '\n';
    }


} // namespace ramin
