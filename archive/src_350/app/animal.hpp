#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#pragma once

#include <iostream>
#include <string>
#include <string_view>


namespace nelson {

    class animal {


    protected:
        std::string m_description_{};

    public:
        animal() noexcept(true);

        explicit animal(std::string_view desc_param) noexcept(true);

        virtual ~animal() noexcept(true);

        virtual void breathe() const noexcept(true);
    };


} // namespace nelson


#endif
