#ifndef HEADER_SHAPE_HPP
#define HEADER_SHAPE_HPP

#pragma once

#include <iostream>
#include <string>
#include <string_view>


namespace ramin {

    class shape {

    protected:
        std::string m_description_{};

    protected:
        shape() noexcept(true);

        explicit shape(std::string_view desc_param) noexcept(true);

    public:
        virtual ~shape() noexcept(true);

        /* pure virtual function */
        [[maybe_unused]] [[nodiscard]] virtual double perimeter() const noexcept(true) = 0;

        /* pure virtual function */
        [[maybe_unused]] [[nodiscard]] virtual double surface() const noexcept(true) = 0;
    };


} // namespace ramin


#endif
