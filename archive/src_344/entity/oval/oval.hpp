#ifndef OVAL_HPP
#define OVAL_HPP

#pragma once
#include "shape.hpp"

namespace albert {
    class oval : public shape {
    private:
        double m_x_radius_{0.0};
        double m_y_radius_{0.0};

    public:
        oval() noexcept(true);

        oval(double x_radius_param, double y_radius_param, std::string_view description_param) noexcept(true);

        virtual ~oval() noexcept(true) override;

        virtual void draw() const noexcept(true) override;
    };
}


#endif //OVAL_HPP
