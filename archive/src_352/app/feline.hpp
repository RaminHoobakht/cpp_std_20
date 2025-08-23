#ifndef HEADER_FELINE_HPP
#define HEADER_FELINE_HPP

#pragma once

#include "animal.hpp"


namespace farshchian {

    class feline : public animal {

    public:
        std::string m_fur_style{};


    public:
        feline() noexcept(true);

        feline(std::string_view fur_style_param,
               std::string_view desc_param) noexcept(true);

        ~feline() noexcept(true) override;

    public:
        [[maybe_unused]] virtual void run() const noexcept(true);

        [[maybe_unused]] void do_some_feline_thingy() const noexcept(true);
    };


} // namespace farshchian


#endif
