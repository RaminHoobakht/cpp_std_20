#ifndef FELINE_HPP
#define FELINE_HPP

#pragma once

#include "animal.hpp"

namespace ramin {

    class feline : public animal {

    public:
        std::string m_fur_style_{};

        feline() noexcept(true);

        feline(std::string_view fur_style_param,
               std::string_view desc_param) noexcept(true);

        virtual ~feline() noexcept(true);

        virtual void run() const noexcept(true);
    };


} // namespace ramin


#endif
