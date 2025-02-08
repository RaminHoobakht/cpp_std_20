#include "../header/main.hpp"
#include <cstring>
#include <iostream>

int main() {

    char str[]{"/home/hinata/workspace/cplusplus/vscode/cpp_std_20"};

    char *output{std::strrchr(str, '/')};
    if (output) {
        std::cout << "result is: " << output + 1 << NL;
    }

    std::cout << "\n #(18:39:25): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
