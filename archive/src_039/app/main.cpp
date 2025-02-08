#include "../header/main.hpp"
#include <cstring>
#include <iostream>


int main() {
    // constexpr auto *str{"Try not. Do or do not. There is no try."};
    constexpr auto *str{"Try not. Do or do not. There is no try."};
    constexpr char target{'.'};
    const char *result{str};
    size_t counter{};

    while ((result = std::strchr(result, target)) != nullptr) {
        std::cout << result << NL;
        ++result;
        ++counter;
    }

    std::cout << "I find " << counter << " of the " << target << " ." << NL;

    std::cout << "\n #(13:12:20): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
