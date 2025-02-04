#include <iostream>
#include "../header/main.hpp"


int main() {
    /* code */

    constexpr char thought[]{"C++ Programming Language is one of the most used on the Planet."};
    size_t lowercase{};
    size_t uppercase{};
    size_t other{};

    for (const char &item: thought) {
        if (std::islower(item) != 0) {
            ++lowercase;
        } else if (std::isupper(item) != 0) {
            ++uppercase;
        } else {
            ++other;
        }
    }

    std::cout << "lower case number is: " << lowercase << NL;
    std::cout << "upper case number is: " << uppercase << NL;
    std::cout << "oter character number is: " << other << NL;

    std::cout << "\n #(18:27:42): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
