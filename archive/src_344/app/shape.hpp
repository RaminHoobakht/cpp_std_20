#ifndef SHAPE_HPP
#define SHAPE_HPP

#pragma once

#include <iostream>
#include <string>
#include <string_view>

namespace albert {

    constexpr auto nl{'\n'};

    class shape {

    protected:
        std::string m_description_{};

    public:
        shape() noexcept(true);

        shape(std::string_view desc_param) noexcept(true);

        virtual ~shape() noexcept(true);

        virtual void draw() const noexcept(true);
    };


} // namespace albert


#endif
