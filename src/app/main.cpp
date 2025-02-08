#include "../header/main.hpp"
#include <cstring>
#include <iostream>

int main() {
    /* code */

    constexpr auto str{"I am a C/C++ Developer ..."};
    constexpr auto target{'a'};
    const char *result{str};
    size_t counter{};

    while ((result = std::strchr(result, target)) != nullptr) {
        std::cout << result << NL;
        ++counter;
        ++result;
    }

    std::cout << " I found " << counter << " of target." << NL;

    std::cout << "\n #(04:52:37): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
