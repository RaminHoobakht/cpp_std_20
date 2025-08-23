#ifndef PIGEON_HPP
#define PIGEON_HPP

#pragma once

#include "bird.hpp"

namespace nelson {

    class pigeon : public bird {

        private:
            virtual void init_stream(std::ostream &out) const noexcept(true) override;

    public:
        pigeon() noexcept(true);

        pigeon(std::string_view wing_color_param,
               std::string_view desc_param) noexcept(true);

        virtual ~pigeon() noexcept(true);

        virtual void breathe() const noexcept(true) override;

        virtual void fly() const noexcept(true) override;

        virtual void coo() const noexcept(true);
    };


} // namespace nelson


#endif
