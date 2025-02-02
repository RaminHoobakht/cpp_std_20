#ifndef HEADER_MAIN_CPP
#define HEADER_MAIN_CPP

#include <format>
#include <iostream>

#define NL '\n'
#define SP '\x20'

namespace util {

    constexpr size_t min{0LLU};

    inline void separator(size_t, char) noexcept;
    inline void separator_msg(const char *, size_t, char) noexcept;


    inline void separator(const size_t no = 64, const char ch = '-') noexcept {
        for (size_t i{min}; i < no; ++i) {
            std::cout << ch;
        }
        std::cout << NL;
    }


    inline void separator_msg(const char *msg, const size_t no = 16,
                              const char ch = '-') noexcept {
        std::cout << NL << ch << ch << ch << SP << msg << SP;
        for (size_t i{min}; i < no; ++i) {
            std::cout << ch;
        }
        std::cout << NL;
    }


} // namespace util

#endif /* HEADER_MAIN_CPP */
