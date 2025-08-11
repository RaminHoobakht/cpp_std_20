#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#pragma once
#include "oval.hpp"

namespace albert {
    class circle : public oval {
    protected:
        double radius_{};

    public:
        circle() noexcept(true);

        circle(double radius_param, std::string_view description_param) noexcept(true);

        virtual ~circle() noexcept(true) override final;

        virtual void draw() const noexcept(true) override final;
    };
}


#endif //CIRCLE_HPP
