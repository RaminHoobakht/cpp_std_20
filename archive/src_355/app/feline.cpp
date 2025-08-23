#include "feline.hpp"


namespace nelson {


    feline::feline() noexcept(true) = default;

    feline::feline(const std::string_view fur_style_param,
                   const std::string_view desc_param) noexcept(true) :
        animal{desc_param}, m_fur_style_{fur_style_param} {}

    feline::~feline() noexcept(true) = default;

    void feline::breathe() const noexcept(true) {
        std::cout << "feline::breathe() was called for: " << m_description_
                  << '\n';
    }

    void feline::run() const noexcept(true) {
        std::cout << "feline::run() was called for: " << m_description_ << '\n';
    }

    void feline::init_stream(std::ostream &out) const noexcept(true) {
        out << "I am Feline ... (Polymorphism) ...";
    }

} // namespace nelson
