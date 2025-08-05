#ifndef PERSON_HPP
#define PERSON_HPP

#pragma once

#include <iostream>
#include <ostream>
#include <string>
#include <string_view>

namespace albert {

    class alignas(8) person {
        friend std::ostream &operator<<(std::ostream &out,
                                        const person &other) noexcept(true);

    public:
        std::string m_full_name_{"None"};

    private:
        std::string m_address_{"None"};

    protected:
        unsigned int m_age_{};
        unsigned int padding_{};

    public:
        person() noexcept(true);

        person(std::string_view full_name_param, unsigned int age_param,
               std::string_view address_param) noexcept(true);

        person(const person &other) noexcept(true);

        ~person() noexcept(true);

        void set_full_name(std::string_view full_name_param) noexcept(true);

        void set_address(std::string_view address_param) noexcept(true);

        void set_age(unsigned int age_param) noexcept(true);

        [[nodiscard]] const std::string &get_full_name() const noexcept(true);

        [[nodiscard]] const std::string &get_address() const noexcept(true);

        [[nodiscard]] unsigned int get_age() const noexcept(true);

        void do_something() const noexcept(true);

        int add(int a, int b) noexcept(true);

        int add(int a, int b, int c) noexcept(true);
    };
} // namespace albert


#endif // PERSON_HPP
