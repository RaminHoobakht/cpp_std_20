#ifndef HEADER_DERIVED_HPP
#define HEADER_DERIVED_HPP

#pragma once

#include "base.hpp"


namespace farshchian {

    class alignas(8) derived final : public base {

    public:
        derived() noexcept(true);

        ~derived() noexcept(true) override;

        void setup() noexcept(true) override;

        void clean_up() noexcept(true) override;
    };


} // namespace farshchian


#endif
