#ifndef HEADER_ANIMAL_HPP
#define HEADER_ANIMAL_HPP

#pragma once

#include <iostream>
#include <string>
#include <string_view>

namespace farshchian {

    class animal {

    protected:
        std::string m_description_{};

    public:
        animal() noexcept(true);

        explicit animal(std::string_view desc_param) noexcept(true);

        virtual ~animal() noexcept(true);

    public:
        [[maybe_unused]] virtual void breathe() const noexcept(true);
    };


} // namespace farshchian


#endif
