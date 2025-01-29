#ifndef HEADER_MAIN_HPP
#define HEADER_MAIN_HPP

#include <iostream>

#define NL '\n'
#define SP '\x20'

namespace util {

    inline void separator(const size_t no, const char ch) noexcept;

    inline void separator(const size_t no, const char ch) noexcept {
        for (size_t i{0LLU}; i < no; ++i) {
            std::cout << ch;
        }
        std::cout << NL;
    }
} // namespace util


#endif /* HEADER_MAIN_HPP */
