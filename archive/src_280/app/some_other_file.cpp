
#include "../util/util.hpp"

void print_distance() noexcept;
static void some_other_function() noexcept;


/* this is only declaration. the definition is
   at main.cpp source file. */
extern const double distance;


void print_distance() noexcept {
    pout << "distance  (some_other_file): " << distance << NL;
    pout << "&distance (some_other_file): " << &distance << NL;
}

/* convert external linkage to internal linkage */
// static void some_other_function() noexcept {
//     /* code */
//     pout << "Hello World ..." << NL;
// }

/* convert external linkage to internal linkage */
namespace {
    void some_other_function() noexcept {
        /* code */
        pout << "Hello World ..." << NL;
    }
} // namespace
