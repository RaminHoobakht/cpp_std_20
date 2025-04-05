#ifndef PERSON_HEADER_HPP
#define PERSON_HEADER_HPP

#include <iostream>
#include "utillib.hpp"

namespace entity {

    class person final {

    private:
        str first_name_{};
        str last_name_{};
        uint age_{};
        uint temp{};

    public:
        person() noexcept;
        person(crstr name, crstr family, uint age) noexcept;
        person(person &person) = default;
        person(person &&person) = default;
        ~person() noexcept;

        [[maybe_unused]] void set_first_name(crstr name) noexcept;
        [[maybe_unused]] void set_last_name(crstr family) noexcept;
        [[maybe_unused]] void set_age(uint age) noexcept;

        [[maybe_unused]] [[nodiscard]] crstr get_first_name() const noexcept;
        [[maybe_unused]] [[nodiscard]] crstr get_last_name() const noexcept;
        [[maybe_unused]] [[nodiscard]] uint get_age() const noexcept;

        [[maybe_unused]] void display_person() const noexcept;

        [[maybe_unused]] person &operator=(const person &rhs) noexcept;
        [[maybe_unused]] person operator+(person &rhs) noexcept;
    };

} // namespace entity

#endif
