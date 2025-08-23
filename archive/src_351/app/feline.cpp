#include "feline.hpp"


namespace farshchian {


    feline::feline() noexcept(true) = default;

    feline::feline(const std::string_view fur_style_param,
                   const std::string_view desc_param) noexcept(true) :
        animal{desc_param}, m_fur_style{fur_style_param} {}

    feline::~feline() noexcept(true) {
        std::cout << "Goodbye feline ..." << '\n';
    }

    void feline::run() const noexcept(true) {
        std::cout << "feline::run() was called for: " << m_description_ << '\n';
    }

    void feline::do_some_feline_thingy() const noexcept(true) {
        std::cout << "doning some feline thingy ..." << '\n';
    }

} // namespace farshchian
