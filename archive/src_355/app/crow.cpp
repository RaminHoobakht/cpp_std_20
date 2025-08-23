#include "crow.hpp"


namespace nelson {

    crow::crow() noexcept(true) = default;

    crow::crow(std::string_view wing_color_param,
               std::string_view desc_param) noexcept(true) :
        bird{wing_color_param, desc_param} {}

    crow::~crow() noexcept(true) = default;

    void crow::breathe() const noexcept(true) {
        std::cout << "crow::breathe() was called for: " << m_description_
                  << '\n';
    }

    void crow::fly() const noexcept(true) {
        std::cout << "crow::fly() was called for: " << m_description_ << '\n';
    }

    void crow::cow() const noexcept(true) {
        std::cout << "crow::cow() was called for: " << m_description_ << '\n';
    }

    void crow::init_stream(std::ostream &out) const noexcept(true) {
        out << "I am Crow ... (Polymorphism) ...";
    }

} // namespace nelson
