#ifndef SHAPE_HPP
#define SHAPE_HPP

#pragma once

#include <string>
#include <iostream>

namespace albert {
    class shape {
    protected:
        std::string m_description_{};

    public:
        shape() noexcept(true);

        explicit shape(std::string_view description_param) noexcept(true);

        shape(const shape &other) noexcept(true);

        virtual ~shape() noexcept(true);

        virtual void draw() const noexcept(true);
    };
}


#endif //SHAPE_HPP
