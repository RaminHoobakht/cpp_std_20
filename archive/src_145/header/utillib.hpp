#ifndef HEADER_MAIN_CPP
#define HEADER_MAIN_CPP

#include <iostream>
#include <string>

#define NL '\n'
#define RT '\r'
#define SP '\x20'
#define LINEFEED std::cout << NL
#define SEP util::separator()

using str = std::string;
using cstr = const std::string;
using rstr = std::string &;
using crstr = const std::string &;

namespace util {

    constexpr size_t zero{0LU};

    /* -------------------------------------------------- */

    void separator(const size_t no = 64LU, const char ch = '-') noexcept;

    std::string &trim(std::string &str, bool right, bool left) noexcept;

    /* -------------------------------------------------- */

    class publicexception;
    
} // namespace util

#endif /* HEADER_MAIN_CPP */
