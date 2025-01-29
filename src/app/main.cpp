/* swapping two arrays */
#include <iostream>

#define nl '\n'

int main() {

    constexpr size_t min{0LLU};

    int temp{};
    int arr_one[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr_two[]{10, 20, 30, 40, 50, 60, 70, 80, 90};

    const size_t length_one{std::size(arr_one)};
    const size_t length_two{std::size(arr_two)};

    std::cout << "length of array one is: " << length_one << nl;
    std::cout << "length of array two is: " << length_two << nl;

    /* -------------------- */

    /* print array one */
    std::cout << "array one: " << nl;
    for (size_t i{min}; i < length_one; ++i) {
        std::cout << arr_one[i] << '\x20';
    }
    std::cout << nl;

    /* print array two */
    std::cout << "array two: " << nl;
    for (size_t i{min}; i < length_one; ++i) {
        std::cout << arr_two[i] << '\x20';
    }
    std::cout << nl;

    std::cout << "=======================================" << nl;

    if (length_one == length_two) {
        for (size_t len{min}; len < length_one; ++len) {
            temp = arr_one[len];
            arr_one[len] = arr_two[len];
            arr_two[len] = temp;
        }
    }

    /* -------------------- */

    /* print array one */
    std::cout << "array one: " << nl;
    for (size_t i{min}; i < length_one; ++i) {
        std::cout << arr_one[i] << '\x20';
    }
    std::cout << nl;

    /* print array two */
    std::cout << "array two: " << nl;
    for (size_t i{min}; i < length_one; ++i) {
        std::cout << arr_two[i] << '\x20';
    }
    std::cout << nl;

    std::cout << "\n #STD20(09:27:02): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
