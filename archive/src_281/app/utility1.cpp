#include "../util/util.hpp"
#include "utility.h"

inline void some_function() noexcept;
void print_age_utility1() noexcept;


inline int age{12};

inline void some_function() noexcept {
    pout << "age  : " << age << NL;
    pout << "&age : " << &age << NL;
}

void print_age_utility1() noexcept {
    SEP;
    some_function();
    SEP;
}
