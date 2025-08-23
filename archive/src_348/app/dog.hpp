#ifndef DOG_HPP
#define DOG_HPP

#pragma once

#include "feline.hpp"

namespace ramin {

    class dog : public feline {

    public:
        dog() noexcept(true);

        dog(std::string_view fur_style,
            std::string_view desc_param) noexcept(true);

        virtual ~dog() noexcept(true);

        virtual void breathe() const noexcept(true) override;

        virtual void run() const noexcept(true) override;

        virtual void bark() const noexcept(true);
    };


} // namespace ramin


#endif
