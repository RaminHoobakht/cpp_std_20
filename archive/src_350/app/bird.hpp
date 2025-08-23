#ifndef BIRD_HPP
#define BIRD_HPP

#pragma once

#include "animal.hpp"

namespace nelson {


    class bird : public animal {

    private:
        std::string wing_color_{};

    public:
        bird() noexcept(true);

        bird(std::string_view wing_color_param, std::string_view desc_param) noexcept(true);

        virtual ~bird() noexcept(true);

        virtual void breathe() const noexcept(true) override;

        virtual void fly() const noexcept(true);
    };


} // namespace nelson


#endif
