#include <iostream>

#define nl '\n'

int main() {

    constexpr bool go{false};

    if (int heigh_speed{33}; go) {

        if (heigh_speed > 15) {
            std::cout << "Slow Down ..." << nl;
        } else {
            std::cout << "every thing is good ..." << nl;
        }

    } else {
        std::cout << "heigh speed is: " << heigh_speed << nl;
        std::cout << "Stop Please ..." << nl;
    }


    std::cout << "\n #STD20(21:36:51): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
