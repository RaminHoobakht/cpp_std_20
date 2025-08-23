#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#pragma once

#include <iostream>
#include <ostream>
#include <string>
#include <string_view>
#include "stream_inserttable.hpp"


namespace nelson {

    class animal : public ramin::stream_inserttable {

    private:
        virtual void init_stream(std::ostream &out) const noexcept(true) override;

    protected:
        std::string m_description_{};

    public:
        animal() noexcept(true);

        explicit animal(std::string_view desc_param) noexcept(true);

        virtual ~animal() noexcept(true);

        virtual void breathe() const noexcept(true);
    };


} // namespace nelson


#endif
