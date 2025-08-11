#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#pragma once

#include "oval.hpp"

namespace albert {

    class circle : public oval {

    private:
        double m_radius_{};

    public:
        circle() noexcept(true);

        circle(double radius_param, std::string_view desc_param) noexcept(true);

        virtual ~circle() noexcept(true);

        virtual void draw() const noexcept(true) override;
    };

} // namespace albert


#endif
