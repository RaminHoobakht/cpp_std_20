#include "../header/main.hpp"
#include <cstring>
#include <iostream>

int main() {

    const char *str{"Try not. Do, or do not. There is no try."};
    const char target = 'T';
    const char *result{nullptr};
    size_t counter{};

    /* when str is incremented insted of the result (result = str) 
     * there are 25 result in loop. because the distance of the 
     * T from (Try) to T from (There), there are 25 characters. */
    while ((result = std::strchr(str, target)) != nullptr) {
        ++counter;
        std::cout << " " << counter << " - " << "result is: " << result << NL;
        ++str;
    }

    std::cout << "\n #(11:46:27): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
