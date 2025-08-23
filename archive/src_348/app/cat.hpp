#ifndef CAT_HPP
#define CAT_HPP

#pragma once

#include "feline.hpp"


namespace ramin {


    class cat : public feline {

    public:
        cat() noexcept(true);

        cat(std::string_view fur_style_param,
            std::string_view desc_param) noexcept(true);

        virtual ~cat() noexcept(true);

        virtual void breathe() const noexcept(true) override;

        virtual void run() const noexcept(true) override;

        virtual void miaw() const noexcept(true);
    };


} // namespace ramin


#endif
