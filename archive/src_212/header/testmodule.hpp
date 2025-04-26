#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

/* declaration */
namespace cpp {

    template<typename T, typename P>
    [[maybe_unused]] auto maximum(T a, P b) noexcept -> decltype((a > b) ? a : b);

    template<typename T, typename P>
    [[maybe_unused]] auto maximum(T a, P b) noexcept -> decltype((a > b) ? a : b) {
        return (a > b) ? a : b;
    }


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
