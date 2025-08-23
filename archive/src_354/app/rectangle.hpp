#ifndef HEADER_RECTANGLE_HPP
#define HEADER_RECTANGLE_HPP

#pragma once

#include "shape.hpp"


namespace ramin {

    class rectangle : public shape {

    private:
        double m_width_{};
        double m_height_{};

    public:
        rectangle() noexcept(true);

        rectangle(double width_param, double height_param,
                  std::string_view desc_param) noexcept(true);

        ~rectangle() noexcept(true) override;

    public:
        [[maybe_unused]] [[nodiscard]] double perimeter() const
                noexcept(true) override;

        [[maybe_unused]] [[nodiscard]] double surface() const
                noexcept(true) override;
    };


} // namespace ramin


#endif
