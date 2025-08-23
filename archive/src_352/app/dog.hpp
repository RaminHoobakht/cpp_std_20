#ifndef HEADER_DOG_HPP
#define HEADER_DOG_HPP

#pragma once

#include "feline.hpp"


namespace farshchian {

    class dog : public feline {


    private:
        double m_speed_{};

    public:
        dog() noexcept(true);

        dog(std::string_view fur_style_param, std::string_view desc_param) noexcept(true);

        ~dog() noexcept(true) override;

    public:
        [[maybe_unused]] virtual void bark() const noexcept(true);

        [[maybe_unused]] void do_some_dog_thingy() const noexcept(true);

    };


} // namespace farshchian


#endif
