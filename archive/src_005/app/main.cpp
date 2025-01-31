#include <iostream>
#include "../header/main.hpp"


int main() {

    constexpr size_t min{0LLU};
    constexpr size_t buff_size{10LLU};
    const int scores[buff_size]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    const int *p_scores{scores};
    
    util::separator();
    for(size_t i{min}; i < buff_size; ++i) {
        std::cout << "address: " << (p_scores + i) << " value: " << *(p_scores + i) << NL; 
    }
    util::separator();


    std::cout << "\n #(03:38:05): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
