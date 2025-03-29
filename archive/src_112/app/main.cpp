/* sized array passed by reference */

#include <iostream>
#include "../header/utillib.hpp"

signed long long int
sum_array(__restrict_arr const int (&scores)[10]) noexcept(true);


int main() {

    int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    signed long long int result{sum_array(arr)};
    std::cout << "sum of array number is: " << result << NL;


    std::cout << "\n #(16:23:36): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

/* ------------------------------------ */

signed long long int
sum_array(__restrict_arr const int (&scores)[10]) noexcept(true) {

    signed long long int sum{};
    const size_t size{std::size(scores)};
    for (size_t i{util::zero}; i < size; ++i) {
        sum += scores[i];
    }

    return sum;
}
