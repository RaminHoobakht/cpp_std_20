/* swapping two arrays */
#include <iostream>
#include "../header/array_swapping.hpp"
#include "../header/main.hpp"

int main() {
    int arr_one[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr_two[]{10, 20, 30, 40, 50, 60, 70, 80, 90};

    constexpr size_t length_one{std::size(arr_one)};
    constexpr size_t length_two{std::size(arr_two)};

    std::cout << "length of array one is: " << length_one << NL;
    std::cout << "length of array two is: " << length_two << NL;

    /* -------------------- */

    /* print array one */
    std::cout << "array one: " << NL;
    array_swap::display_array(arr_one);

    /* print array two */
    std::cout << "array two: " << NL;
    array_swap::display_array(arr_two);

    /* -------------------- */


    util::separator(32, '-');

    if constexpr (length_one == length_two) {
        array_swap::swap_int_array(arr_one, arr_two);
    }

    /* -------------------- */

    /* print array one */
    std::cout << "array one: " << NL;
    array_swap::display_array(arr_one);

    /* print array two */
    std::cout << "array two: " << NL;
    array_swap::display_array(arr_two);

    /* -------------------- */

    std::cout << "\n #STD20(09:27:02): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
