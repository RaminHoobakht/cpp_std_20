/*
 *  Subject: linkage option:
 *              - no linkage
 *              - internal linkage
 *              - external linkage
 *              - module linkage
 *
 *           rules:
 *              - function local variable has no linkage
 *              - const global variable has internal linkage
 *              - non-const global variable has external linkage
 *              - function has external linkage
 * */

#include "main.hpp"

void some_function() noexcept;

void some_function() noexcept {
    int age{34}; /* the age has no linkage. because age is local variable */
    pout << " age: " << age << " &age: " << &age << NL;
}

/* internal linkage. only visible in this translation unit. */
const double distance{43.7};

/* external linkage. it can use in differrnet translation unit */
int item_count{7};

/* external linkage. it can use in differrnet translation unit */
extern void print_distance() noexcept;
extern void print_item_count() noexcept;

// int age{33};


int main() {

    pout << "distance (main): " << distance << " &distance: " << &distance
         << NL;
    SEP;

    print_distance();
    SEP;


    pout << "item_count (main): " << item_count
         << " &item_count: " << &item_count << NL;
    SEP;

    print_item_count();
    SEP;


    pout << "\n #(00:22:55): The End ..." << eln;
    return EXIT_SUCCESS;
}
