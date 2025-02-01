#include <iostream>
#include "../header/main.hpp"


int main() {

    int arr[]{11,12,13,14,15,16,17,18,19,20};

    int *p_arr_first{arr +3};
    int *p_arr_last{arr +9};

    /* using std::ptrdiff_t to store byte distance between two pointers. */
    std::ptrdiff_t positive{p_arr_last - p_arr_first};
    std::ptrdiff_t negative{p_arr_first - p_arr_last};

    std::cout << "positive distance: " << positive << NL;
    std::cout << "negative distance: " << negative << NL;


    std::cout << "\n #(13:07:23): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
