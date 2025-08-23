#ifndef SHAPE_HPP
#define SHAPE_HPP

#pragma once

#include <iostream>
#include <string>
#include <string_view>

namespace nelson {

    class shape {

    protected:
        std::string m_description_{};

    public:
        static int m_count;

        shape() noexcept(true);

        explicit shape(std::string_view desc_param) noexcept(true);

        virtual ~shape() noexcept(true);

        [[nodiscard]] virtual int get_count() const noexcept(true);
    };


} // namespace nelson


#endif
