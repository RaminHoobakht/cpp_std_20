#include "../header/main.hpp"
#include <iostream>


int main() {

    int array[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *const p_array{array};

    /* p_array can not change it's pointer because
       it restricted by const keyword. so, this source
       encounter with compile time error. */

    p_array++;
    std::cout << *(p_array) << NL;

    p_array++;
    std::cout << *(p_array) << NL;

    p_array++;
    std::cout << *(p_array) << NL;

    std::cout << "\n #(01:39:57): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
