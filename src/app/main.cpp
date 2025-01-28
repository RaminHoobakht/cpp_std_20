#include <iostream>

#define nl '\n'

int main() {

    const int score[]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    const int *p_score{score};

    /* print addres of score on memory */
    std::cout << " score is  : " << score << nl;

    /* print addres of p_score variable is pointing to */
    std::cout << " p_score is: " << p_score << nl;
    
    std::cout << "------------------------------------" << nl;

    const size_t zero{0LLU};
    const size_t size{sizeof(score) / sizeof(*score)};

    /* navigate score element by p_score */
    for (size_t i{zero}; i < size; ++i) {
        std::cout << *(score + i) << nl;
        std::cout << *(p_score + i) << nl;
        std::cout << "~~~~~~~~~~~~~~~~~" << nl;
    }

    std::cout << "------------------------------------" << nl;
    
    /* point to the first element */
    std::cout << " *score is  : " << *score << nl;

    /* point to the first element */
    std::cout << " *p_score is: " << *p_score << nl;


    std::cout << "\n #STD20(20:15:26): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
