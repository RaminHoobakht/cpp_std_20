#ifndef CAT_HPP
#define CAT_HPP

#pragma once

#include "feline.hpp"


namespace nelson {

    class cat : public feline {

        private:
            virtual void init_stream(std::ostream &out) const noexcept(true) override;

    public:
        cat() noexcept(true);

        cat(std::string_view fur_style_param,
            std::string_view desc_param) noexcept(true);

        virtual ~cat() noexcept(true);

        virtual void breathe() const noexcept(true) override;

        virtual void run() const noexcept(true) override;

        virtual void miaw() const noexcept(true);
    };


} // namespace nelson


#endif
