#ifndef CROW_HPP
#define CROW_HPP

#pragma once

#include "bird.hpp"

namespace nelson {


    class crow : public bird {

    private:
        virtual void init_stream(std::ostream &out) const
                noexcept(true) override;

    public:
        crow() noexcept(true);

        crow(std::string_view wing_color_param,
             std::string_view desc_param) noexcept(true);

        virtual ~crow() noexcept(true);

        virtual void breathe() const noexcept(true) override;

        virtual void fly() const noexcept(true) override;

        virtual void cow() const noexcept(true);
    };


} // namespace nelson

#endif
