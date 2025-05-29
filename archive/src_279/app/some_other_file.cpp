#include "../util/util.hpp"

/* declaration and definition of distance variable */
const double distance{103.69};

/* declaration of some variable defined in some other translation unit */
extern int item_count;

void print_distance() noexcept;
void print_item_count() noexcept;

void print_distance() noexcept {
    pout << "distance (other): " << distance << " &distance: " << &distance
         << NL;
}

void print_item_count() noexcept {
    pout << "item_count (other): " << item_count
         << " &item_count: " << &item_count << NL;
}
