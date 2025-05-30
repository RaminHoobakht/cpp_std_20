#include "main.hpp"
#include "util.hpp"

/* convert internal linkage to external linkage */
extern const double distance{47.69};

extern void print_distance() noexcept;
extern void some_other_function() noexcept;

int main() {

    pout << "distance  (main): " << distance << NL;
    pout << "&distance (main): " << &distance << NL;
    SEP;

    print_distance();
    SEP;

    some_other_function();
    SEP;

    pout << "\n #(12:21:28): The End ..." << eln;
    return EXIT_SUCCESS;
}
