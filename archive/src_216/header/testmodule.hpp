#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

/* declaration */
namespace cpp {

    auto sum(auto a, auto b) noexcept;

    auto sum(auto a, auto b) noexcept {
        return a + b;
    }


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
