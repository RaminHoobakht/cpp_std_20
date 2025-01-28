#include <iostream>

#define nl '\n'

int main() {

    int score[]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int *p_score{score};

    std::cout << "score is  : " << score << nl;
    std::cout << "p_score is: " << p_score << nl;


    std::cout << "\n #STD20(20:15:26): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
