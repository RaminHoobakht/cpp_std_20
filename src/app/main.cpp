#include "../header/main.hpp"
#include <cstring>
#include <iostream>

int main() {

    constexpr auto my_path{
            "/home/hinata/workspace/cplusplus/vscode/cpp_std_20"};
    constexpr auto target{'/'};
    const char *result{my_path};

    while ((result = std::strchr(result, target)) != nullptr) {
        ++result;
        std::cout << result << NL;
    }


    std::cout << "\n #(10:54:06): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
