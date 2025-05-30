#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

/* declaration */
namespace cpp {

    template<typename T, typename P>
    decltype(auto) maximum(T a, P b) noexcept;

    template<typename T, typename P>
    decltype(auto) maximum(T a, P b) noexcept {
        return (a > b) ? a : b;
    }


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
