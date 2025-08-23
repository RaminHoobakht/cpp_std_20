#ifndef CROW_HPP
#define CROW_HPP

#pragma once

#include "bird.hpp"

namespace ramin {


    class crow : public bird {

    public:
        crow() noexcept(true);

        crow(std::string_view wing_color_param,
             std::string_view desc_param) noexcept(true);

        virtual ~crow() noexcept(true);

        virtual void breathe() const noexcept(true) override;

        virtual void fly() const noexcept(true) override;

        virtual void cow() const noexcept(true);
    };

} // namespace ramin


#endif
