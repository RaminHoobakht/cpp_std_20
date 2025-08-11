#ifndef OVAL_HPP
#define OVAL_HPP

#pragma once

#include "shape.hpp"


namespace ramin {

    class oval : public shape {

    private:
        double m_x_radius_{};
        double m_y_radius_{};

    public:
        oval() noexcept(true);

        oval(double x_radius_param, double y_radius_param,
             std::string_view desc_param) noexcept(true);

        ~oval() noexcept(true);

        virtual void draw() const noexcept(true) override;

        virtual void draw(int color_dept) const noexcept(true) override;
    };


} // namespace ramin


#endif
