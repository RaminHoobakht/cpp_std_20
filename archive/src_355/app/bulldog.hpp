#ifndef BULLDOG_HPP
#define BULLDOG_HPP

#pragma once

#include "dog.hpp"

namespace nelson {


    class bulldog : public dog {

        private:
        virtual void init_stream(std::ostream &out) const noexcept(true) override;
    public:
        bulldog() noexcept(true);

        virtual ~bulldog() noexcept(true);
    };


} // namespace nelson


#endif
