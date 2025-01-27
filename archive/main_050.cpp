/* using loop:  */
#include <iostream>


#define nl '\n'

int main() {

    for (size_t i{0llu}; ; ++i) {
        std::cout << "i: " << i << nl;
    }

    std::cout << "\n #STD20(21:54:21): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
