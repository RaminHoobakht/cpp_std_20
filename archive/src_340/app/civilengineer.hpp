#ifndef CIVIL_ENGINEER_HPP
#define CIVIL_ENGINEER_HPP

#pragma once

#include "engineer.hpp"

namespace albert {


    class civil_engineer : public engineer {

        using engineer::engineer;

    public:
        civil_engineer() noexcept(true);


        ~civil_engineer() noexcept(true);
    };


} // namespace albert


#endif
