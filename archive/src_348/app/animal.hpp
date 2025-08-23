#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#pragma once

#include <iostream>
#include <string>
#include <string_view>

namespace ramin {

    class animal {

    protected:
        std::string_view m_description_{};

    public:
        animal() noexcept(true);

        explicit animal(std::string_view desc_param) noexcept(true);

        virtual ~animal() noexcept(true);

        virtual void breathe() const noexcept(true);
    };


} // namespace ramin


#endif
