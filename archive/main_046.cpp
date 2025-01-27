#include <iostream>

#define nl '\n'

int main() {

    int intend{-3};

    if (intend) {
        std::cout << "it convert to ture. " << "value of intend is: " << intend
                  << nl;
    } else {
        std::cout << "it convert to fales. " << "value of intend is: " << intend
                  << nl;
    }


    std::cout << "\n #STD20(20:07:15): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
