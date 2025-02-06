#include "../header/main.hpp"
#include <cstring>
#include <iostream>

int main() {

    constexpr auto *str{"Try not. Do or do not. There is no try."};
    constexpr char target{'T'};
    const char *result{};

    result = std::strchr(str, target);
    std::cout << "result is: " << result << NL;

    std::cout << "\n #(12:58:10): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
