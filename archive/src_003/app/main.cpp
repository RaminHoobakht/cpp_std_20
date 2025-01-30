#include <iostream>
#include "../header/main.hpp"


int main() {

    size_t length{};
    int arr0[]{1, 2, 3, 4, 5};
    int arr1[]{6, 7, 8, 9, 10};
    int *p_arr0{arr0};
    int *p_arr1{arr1};
    int *temp{};

    /* ----------------------------------- */

    length = std::size(arr0);
    for (size_t i{0LLU}; i < length; ++i) {
        std::cout << arr0[i] << SP;
    }
    std::cout << NL;

    length = std::size(arr1);
    for (size_t i{0LLU}; i < length; ++i) {
        std::cout << arr1[i] << SP;
    }
    std::cout << NL;

    util::separator(32, '-');

    /* ----------------------------------- */

    temp = arr0;
    p_arr0 = p_arr1;
    p_arr1 = temp;

    /* ----------------------------------- */

    length = std::size(arr0);
    for (size_t i{0LLU}; i < length; ++i) {
        std::cout << p_arr0[i] << SP;
    }
    std::cout << NL;

    length = std::size(arr1);
    for (size_t i{0LLU}; i < length; ++i) {
        std::cout << p_arr1[i] << SP;
    }
    std::cout << NL;

    util::separator(32, '-');

    /* ----------------------------------- */

    std::cout << "\n #(02:22:04): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
