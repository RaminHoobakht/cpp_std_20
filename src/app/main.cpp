#include "../header/main.hpp"
#include <iostream>

int main() {

    /* array can not increment or decrement 
       because it's pointer is const. */
    int arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int result{};

    std::cout << *(arr + 0) << NL;

    result = *(arr + 1);
    std::cout << result << NL;

    result = *(arr + 2);
    std::cout << result << NL;


    std::cout << "\n #(09:09:53): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
