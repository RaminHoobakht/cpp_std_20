#include "base.hpp"


namespace farshchian {


    base::base() noexcept(true) {
        std::cout << "base default constructor was called ..." << '\n';
    }

    base::~base() noexcept(true) {
        std::cout << "Goodbye base ..." << '\n';
    }

    int base::get_value() const noexcept(true) { return m_value; }

    void base::setup() noexcept(true) {
        std::cout << "base::setup() was called ..." << '\n';
        m_value = 10;
    }

    void base::clean_up() noexcept(true) {
        std::cout << "base::clean_up() was called ..." << '\n';
    }


} // namespace farshchian
