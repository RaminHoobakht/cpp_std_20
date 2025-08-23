#include "animal.hpp"

namespace farshchian {

    animal::animal() noexcept(true) = default;

    animal::animal(std::string_view desc_param) noexcept(true) :
        m_description_{desc_param} {}

    animal::~animal() noexcept(true){
        std::cout << "Goodbye animal ..." << '\n';
    }

    void animal::breathe() const noexcept(true) {
        std::cout << "animal::breathe() was called for: " << m_description_
                  << '\n';
    }
} // namespace farshchian
