
#ifndef FELINE_HPP
#define FELINE_HPP

#pragma once

#include "animal.hpp"


namespace nelson {


    class feline : public animal {

    private:
        virtual void init_stream(std::ostream &out) const noexcept(true) override;

    public:
        std::string m_fur_style_{};

        feline() noexcept(true);

        feline(std::string_view fur_style_param,
               std::string_view desc_param) noexcept(true);

        virtual ~feline() noexcept(true);

        virtual void breathe() const noexcept(true) override;

        virtual void run() const noexcept(true);
    };


} // namespace nelson


#endif
