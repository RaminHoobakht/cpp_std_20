#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include "utillib.hpp"

/* declaration */
namespace cpp {

    template<typename returnType, typename T, typename P>
    returnType maximum(T a, P b) noexcept;


    template<typename returnType = double, typename T, typename P>
    returnType maximum(T a, P b) noexcept {
        out << "a data type is: " << util::data_type_name(a) << NL;
        out << "b data type is: " << util::data_type_name(b) << NL;
        return (a > b) ? a : b;
    }

} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
