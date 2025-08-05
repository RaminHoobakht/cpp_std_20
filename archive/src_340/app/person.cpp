#include "person.hpp"

namespace albert {

    person::person() noexcept(true) {}

    person::person(const std::string_view full_name_param,
                   unsigned int age_param,
                   const std::string_view address_param) noexcept(true) :
        m_full_name_(full_name_param), m_address_(address_param),
        m_age_(age_param) {
        std::cout << "I am person constructor ..." << '\n';
    }

    person::person(const person &other) noexcept(true) :
        m_full_name_(other.m_full_name_), m_address_(other.m_address_),
        m_age_(other.m_age_) {}

    person::~person() noexcept(true) {
        std::cout << "Goodbye Person ..." << '\n';
    }

    void
    person::set_full_name(std::string_view full_name_param) noexcept(true) {
        m_full_name_ = full_name_param;
    }

    void person::set_address(std::string_view address_param) noexcept(true) {
        m_address_ = address_param;
    }

    void person::set_age(unsigned int age_param) noexcept(true) {
        m_age_ = age_param;
    }

    const std::string &person::get_full_name() const noexcept(true) {
        return m_full_name_;
    }

    const std::string &person::get_address() const noexcept(true) {
        return m_address_;
    }

    unsigned int person::get_age() const noexcept(true) { return m_age_; }

    void person::do_something() const noexcept(true) {
        std::cout << "I am doing something ..." << '\n';
    }

    int person::add(int a, int b) noexcept(true) { return a + b; }

    int person::add(int a, int b, int c) noexcept(true) { return a + b + c; }


    /* ---------------------------------------------------------------- */

    std::ostream &operator<<(std::ostream &out,
                             const person &other) noexcept(true) {
        return out << "{ "
                   << "m_full_name_:" << other.get_full_name() << ", "
                   << "m_address_:" << other.get_address() << ", "
                   << "m_age_:" << other.get_age() << " }";
    }


} // namespace albert
