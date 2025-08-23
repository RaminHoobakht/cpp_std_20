#ifndef HEADER_BASE_HPP
#define HEADER_BASE_HPP

#pragma once

#include <iostream>
#include <string>
#include <string_view>

namespace farshchian {

    class alignas(8) base {

    protected:
        int m_value{};
        int t_padding_{};

    public:
        base() noexcept(true);

        virtual ~base() noexcept(true);

        [[nodiscard]] int get_value() const noexcept(true);

        [[maybe_unused]] virtual void setup() noexcept(true);

        [[maybe_unused]] virtual void clean_up() noexcept(true);
    };


} // namespace farshchian


#endif
