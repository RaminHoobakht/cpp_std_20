#include <iostream>

#define nl '\n'

int main() {

    //bool constexpr conditoin{false};

    if constexpr(true) {
        std::cout << "conditoin is true ..." << nl;
    } else {
        std::cout << "conditoin is flase ..." << nl;
    }

    std::cout << "\n #STD20(21:28:17): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
