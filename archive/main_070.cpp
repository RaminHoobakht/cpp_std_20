/* swapping two arrays */
#include <iostream>

#define NL '\n'

namespace cpp {
    void my_swap(int *a, int *b) noexcept;

    void display_array(const int (&arr)[9]) noexcept;

    void swap_int_array(int (&arr_a)[9], int (&arr_b)[9]) noexcept;


    void my_swap(int *a, int *b) noexcept {
        const int temp{*a};
        *a = *b;
        *b = temp;
    }

    void display_array(const int (&arr)[9]) noexcept {
        for (size_t i{0LLU}; i < 9LLU; ++i) {
            std::cout << arr[i] << '\x20';
        }
        std::cout << NL;
    }

    void swap_int_array(int (&arr_a)[9], int (&arr_b)[9]) noexcept {
        for (size_t len{0LLU}; len < 9LLU; ++len) {
            my_swap(&arr_a[len], &arr_b[len]);
        }
    }

}

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
    cpp::display_array(arr_one);

    /* print array two */
    std::cout << "array two: " << NL;
    cpp::display_array(arr_two);


    /* -------------------- */


    std::cout << "=======================================" << NL;

    if constexpr (length_one == length_two) {
        cpp::swap_int_array(arr_one, arr_two);
    }

    /* -------------------- */

    /* print array one */
    std::cout << "array one: " << NL;
    cpp::display_array(arr_one);

    /* print array two */
    std::cout << "array two: " << NL;
    cpp::display_array(arr_two);

    /* -------------------- */

    std::cout << "\n #STD20(09:27:02): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
