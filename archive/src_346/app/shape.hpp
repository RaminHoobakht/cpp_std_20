#ifndef SHAPE_HPP
#define SHAPE_HPP

#pragma once

#include <iostream>
#include <string>
#include <string_view>


/* Ramin you are nothing. Then learn hard, to be a valuable one.*/
namespace ramin {

    constexpr auto nl{'\n'};

    class shape {

    protected:
        std::string m_description_{};


    public:
        shape() noexcept(true);

        explicit shape(std::string_view desc_param) noexcept(true);

        virtual ~shape() noexcept(true);

        virtual void draw() const noexcept(true);

        virtual void draw(int color_depth) const noexcept(true);
    };


} // namespace ramin


#endif
