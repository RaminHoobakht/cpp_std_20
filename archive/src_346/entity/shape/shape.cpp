#include "shape.hpp"

namespace albert {
    shape::shape() noexcept(true) {
        std::cout << "Hello, I am shape class ..." << '\n';
    }

    shape::shape(const std::string_view description_param) noexcept(true)
        : m_description_(description_param) {
    }

    shape::~shape() noexcept(true) {
        std::cout << "Goodbye shape class ..." << '\n';
    }

    shape::shape(const shape &other) noexcept(true) : m_description_(other.m_description_) {
    }

    void shape::draw() const noexcept(true) {
        std::cout << "shape::drow() called. drawing: " << m_description_ << '\n';
    }
} // namespace albert
