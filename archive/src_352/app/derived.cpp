#include "derived.hpp"


namespace farshchian {


    derived::derived() noexcept(true) : base() {
        std::cout << "derived default constructor was called ..." << '\n';
    }

    derived::~derived() noexcept(true) {
        std::cout << "drived destructor was called ..." << '\n';
    }

    void derived::setup() noexcept(true) {
        std::cout << "derived::setup() was called ..." << '\n';
        m_value = 100;
    }

    void derived::clean_up() noexcept(true) {
        std::cout << "derived:: clean_up() was called ..." << '\n';
    }


} // namespace farshchian
