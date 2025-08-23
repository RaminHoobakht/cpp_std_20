#include "dog.hpp"


namespace farshchian {


    dog::dog() noexcept(true) = default;

    dog::dog(const std::string_view fur_style_param,
             const std::string_view desc_param) noexcept(true) :
        feline{fur_style_param, desc_param} {}

    dog::~dog() noexcept(true) { std::cout << "Goodbye dog ..." << '\n'; }

    void dog::bark() const noexcept(true) {
        std::cout << "dog::bark() was called for: " << m_description_ << '\n';
    }

    void dog::do_some_dog_thingy() const noexcept(true) {
        std::cout << "do some dog thingy by seppd: " << m_speed_ << '\n';
    }


} // namespace farshchian
