/* passing sized array by reference  */

#include <iostream>
#include "../header/utillib.hpp"

typedef signed long long int lli;

lli sum_array(__restrict_arr const int (&scores)[10]) noexcept(true);

int main() {

    int int_arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    lli sum{sum_array(int_arr)};

    std::cout << "sum of array is: " << sum << NL;

    std::cout << "\n #(19:00:48): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

/* ------------------------ */

lli sum_array(__restrict_arr const int (&scores)[10]) noexcept(true) {

    lli sum{};
    
    /* size of array is sent. so it can using range base for loop */
    for (const int &item: scores) {
        sum += item;
    }

    return sum;
}
