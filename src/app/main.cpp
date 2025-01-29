#include <iostream>

#define nl '\n'

int main() {

    const int score[]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    // const int *p_score{score};

    std::cout << "size of the score is  : " << std::size(score) << nl;


    /* std::size() not work with raw pointer */
    // std::cout << "size of the p_score is: " << std::size(p_score) << nl;


    std::cout << "\n #STD20(18:16:14): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
