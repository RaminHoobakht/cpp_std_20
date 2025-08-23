#ifndef ELLIPSE_HPP
#define ELLIPSE_HPP

#pragma once

#include "shape.hpp"

namespace nelson {

    class ellipse : public shape {

    private:
        double m_x_radius_{};
        double m_y_radius_{};

    public:
        static int m_count;

        ellipse() noexcept(true);

        ellipse(double x_radius_param, double y_radius_param,
                std::string_view desc_param) noexcept(true);

        virtual ~ellipse() noexcept(true);

        [[nodiscard]] virtual int get_count() const noexcept(true) override;
    };


} // namespace nelson


#endif
