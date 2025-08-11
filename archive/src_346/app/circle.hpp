#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#pragma once

#include "oval.hpp"


namespace ramin {

    class circle final : public oval {

    private:
        double m_radius_{};

    public:
        circle() noexcept(true);

        circle(double radius_param, std::string_view desc_param) noexcept(true);

        ~circle() noexcept(true);

        void draw() const noexcept(true) override final;

        void draw(int color_depth) const noexcept(true) override final;
    };


} // namespace ramin


#endif
