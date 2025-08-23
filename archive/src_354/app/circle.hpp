#ifndef HEADER_CIRCLE_HPP
#define HEADER_CIRCLE_HPP

#pragma once

#include "shape.hpp"


namespace ramin {


    class circle : public shape {

    private:
        double m_radius_{};

        inline static double PI_{3.14159265};

    public:
        circle() noexcept(true);

        circle(double radius_param, std::string_view desc_param) noexcept(true);

        ~circle() noexcept(true) override;

    public:
        [[maybe_unused]] [[nodiscard]] double perimeter() const
                noexcept(true) override;

        [[maybe_unused]] [[nodiscard]] double surface() const
                noexcept(true) override;
    };


} // namespace ramin


#endif
