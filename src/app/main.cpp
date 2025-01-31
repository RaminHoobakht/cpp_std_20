#include <iostream>
#include "../header/main.hpp"


int main() {

    constexpr size_t buff_size{10LLU};
    const int scores[buff_size]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    const int *p_scores{scores};

    std::cout << "address: " << p_scores << " value: " << *(p_scores) << NL;

    ++p_scores;
    std::cout << "address: " << p_scores << " value: " << *(p_scores) << NL;

    ++p_scores;
    std::cout << "address: " << p_scores << " value: " << *(p_scores) << NL;

    ++p_scores;
    std::cout << "address: " << p_scores << " value: " << *(p_scores) << NL;

    ++p_scores;
    std::cout << "address: " << p_scores << " value: " << *(p_scores) << NL;

    ++p_scores;
    std::cout << "address: " << p_scores << " value: " << *(p_scores) << NL;

    std::cout << "\n #(03:20:08): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
