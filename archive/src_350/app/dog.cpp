#include "dog.hpp"


namespace nelson {


    dog::dog() noexcept(true) = default;

    dog::dog(std::string_view fur_style_param,
             std::string_view desc_param) noexcept(true) :
        feline{fur_style_param, desc_param} {}

    dog::~dog() noexcept(true) = default;

    void dog::breathe() const noexcept(true) {
        std::cout << "dog::breathe() was called for: " << m_description_
                  << '\n';
    }

    void dog::run() const noexcept(true) {
        std::cout << "dog::run() was called for: " << m_description_ << '\n';
    }

    void dog::bark() const noexcept(true) {
        std::cout << "dog::bark() was called for: " << m_description_ << '\n';
    }


} // namespace nelson
