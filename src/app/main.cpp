#include "../header/main.hpp"
#include <iostream>


int main() {

    int arr0[]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int *p_arr1{arr0 + 3};
    int *p_arr2{arr0 + 8};

    /* distance between the two is five byte. */
    std::cout << "(p_arr2 - p_arr1): " << (p_arr2 - p_arr1) << NL; /* result: 5 */
    std::cout << "(p_arr1 - p_arr2): " << (p_arr1 - p_arr2) << NL; /* result: -5 */

    std::cout << "\n #(01:48:51): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
