#ifndef HEADER_CYLINDER2_HPP
#define HEADER_CYLINDER2_HPP

#pragma once

#include "cylinder2_headers.hpp"


namespace entity {


    class cylinder2 final {

    private:
        double base_radius{};
        double height{};
        static const double Pi;

    public:
        /* integral type and enum can be initialize at header */
        static const int INT_CONSTANT = 5;
        enum color { red = 0, green, blue };
        static const color COLOR_CONSTANT = color::green;

        /* other have to be done in the cpp file */
        static const std::string default_color;
        static const char *CHAR_PTR_CONST;
        static const int INT_ARRAY_CONSTANT[5];
        static const float FLOAT_CONSTANT;
        static const std::string STRING_ARRAY_CONSTANT[2];

        /* not static member */
        const float WIRED_FLOAT;
        const char *WIRED_C_STRING;
        const int WIRED_INT_ARRAY_CONSTANT[5];
    };


} // namespace entity


#endif /* HEADER_CYLINDER2_HPP */
