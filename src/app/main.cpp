#include <iostream>
#include "../header/main.hpp"


int main() {

    constexpr size_t min{0LLU};
    constexpr size_t buff_size{5LLU};

    int arr0[buff_size]{1, 2, 3, 4, 5};
    int arr1[buff_size]{6, 7, 8, 9, 10};
    int temp[buff_size]{};

    /* --------------------------- */

    /* print array zero elements */
    for (size_t i{min}; i < buff_size; ++i) {
        std::cout << arr0[i] << SP;
    }
    std::cout << NL;

    /* print array one elements */
    for (size_t i{min}; i < buff_size; ++i) {
        std::cout << arr1[i] << SP;
    }
    std::cout << NL;
    std::cout << "--------------------------------------------"<< NL;

    /* --------------------------- */

    /* store arr0 elements to the temp array */
    for (size_t i{min}; i < buff_size; ++i) {
        temp[i] = arr0[i];
    }

    /* replace arr1 elements into arr0 */
    for (size_t i{min}; i < buff_size; ++i) {
         arr0[i] = arr1[i];
    }

    /* replace temp elements into arr1 */
    for (size_t i{min}; i < buff_size; ++i) {
         arr1[i] = temp[i];
    }


    /* --------------------------- */

    /* print array zero elements */
    for (size_t i{min}; i < buff_size; ++i) {
        std::cout << arr0[i] << SP;
    }
    std::cout << NL;

    /* print array one elements */
    for (size_t i{min}; i < buff_size; ++i) {
        std::cout << arr1[i] << SP;
    }
    std::cout << NL;


    /* --------------------------- */

    std::cout << "\n #(19:55:06): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
