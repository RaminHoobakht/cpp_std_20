#include "person.hpp"


namespace entity {

    person::person() noexcept {
        /* say hello */
        std::cout << "Hello I am person ..." << NL;
    }

    person::person(crstr name, crstr family, uint age) noexcept :
        first_name_(name), last_name_(family), age_(age) {
        std::cout << "Hello I am " << this->first_name_ << " "
                  << this->last_name_ << NL;
    }

    person::~person() noexcept {
        /* destroy the person object */
        std::cout << "Good Bay " << this->first_name_ << NL;
    }

    [[maybe_unused]] void person::set_first_name(crstr name) noexcept {
        this->first_name_ = name;
    }

    [[maybe_unused]] void person::set_last_name(crstr family) noexcept {
        this->last_name_ = family;
    }

    [[maybe_unused]] void person::set_age(uint age) noexcept {
        /* set age */
        this->age_ = age;
    }

    [[maybe_unused]] [[nodiscard]] crstr
    person::get_first_name() const noexcept {
        return this->first_name_;
    }

    [[maybe_unused]] [[nodiscard]] crstr
    person::get_last_name() const noexcept {
        return this->last_name_;
    }

    [[maybe_unused]] [[nodiscard]] uint person::get_age() const noexcept {
        /* return age */
        return this->age_;
    }

    [[maybe_unused]] void person::display_person() const noexcept {
        std::cout << "name  : " << this->get_first_name() << NL;
        std::cout << "family: " << this->get_last_name() << NL;
        std::cout << "age   : " << this->get_age() << NL;
    }

    [[maybe_unused]] person &person::operator=(const person &rhs) noexcept {
        if (this != &rhs) {
            this->first_name_ = rhs.get_first_name();
            this->last_name_ = rhs.get_last_name();
            this->age_ = rhs.get_age();
        }
        return *this;
    }

    [[maybe_unused]] person person::operator+(person &rhs) noexcept {
        person add_person{};
        add_person.first_name_ = this->first_name_ + rhs.get_first_name();
        add_person.last_name_ = this->last_name_ + rhs.get_last_name();
        add_person.age_ = this->age_ + rhs.get_age();
        return add_person;
    }

} // namespace entity
