#ifndef HEADER_MAIN_CPP
#define HEADER_MAIN_CPP

#include <iostream>

#define NL '\n'
#define SP '\x20'


namespace util {

    void separator(size_t no, char ch) noexcept;

    void separator(const size_t no, const char ch) noexcept {
        for (size_t i{0LLU}; i < no; ++i) {
            std::cout << ch;
        }
        std::cout << NL;
    }


} // namespace util


#endif /* HEADER_MAIN_CPP */
