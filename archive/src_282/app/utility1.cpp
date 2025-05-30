
#include "../util/util.hpp"

inline void some_age_function() noexcept;
void print_age_1() noexcept;
static void some_distance_function() noexcept;
void print_distance_1() noexcept;

// namespace {
//     void some_distance_function() noexcept;
// }

inline int age{12};

inline void some_age_function() noexcept {
    pout << "age : " << age << NL;
    pout << "&age: " << &age << NL;
}

void print_age_1() noexcept {
    pout << "age (utility1):" << NL;
    some_age_function();
}


static double distance{23.9};

static void some_distance_function() noexcept {
    pout << "distance : " << distance << NL;
    pout << "&distance: " << &distance << NL;
}


// namespace {
//
//     double distance{23.9};
//
//     void some_distance_function() noexcept {
//         pout << "distance : " << distance << NL;
//         pout << "&distance: " << &distance << NL;
//     }
//
// } // namespace

void print_distance_1() noexcept {
    pout << "distance (utility1): " << NL;
    some_distance_function();
}
