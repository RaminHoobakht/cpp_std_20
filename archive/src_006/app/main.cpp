#include <iostream>
#include "../header/main.hpp"


int main() {

    const size_t min{0LLU};

    const int int_array[]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    const size_t length{std::size(int_array)};
    
    for(size_t i{length}; i > min; i--) {
        std::cout << *(int_array + i -1) << SP;
    }
    std::cout << NL;

    std::cout << "\n #(06:25:21): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
