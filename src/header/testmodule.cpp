#include "testmodule.hpp"

/* definition */
namespace cpp {

    raphael::raphael() noexcept {
        /* code */
        out << "Hello, Raphael class ..." << NL;
    }

    raphael::raphael(int value_param) noexcept : value_(value_param) {
        out << "Hello, I am initialized Raphael class ..." << NL;
    }

    raphael::raphael(const raphael &rhs) noexcept : value_(rhs.value_) {
        out << "Hello, I am Raphael copy constructor ..." << NL;
    }

    raphael::raphael(raphael &&rhs) noexcept :
        value_(std::exchange(rhs.value_, 0)) {
        out << "Hello, I am Raphael move constructor ..." << NL;
    }

    raphael::~raphael() noexcept {
        /* code */
        out << "Goodbye Raphael ..." << NL;
    }

    void raphael::set_value(int value_param) noexcept {
        /* code */
        value_ = value_param;
    }

    int raphael::get_value() const noexcept {
        /* code */
        return value_;
    }

    raphael &raphael::operator=(const raphael &rhs) noexcept {
        if (this != &rhs) {
            this->value_ = rhs.value_;
        }
        return *this;
    }

    raphael &raphael::operator=(raphael &&rhs) noexcept {
        if (this != &rhs) {
            this->value_ = std::exchange(rhs.value_, 0);
        }
        return *this;
    }

} // namespace cpp
