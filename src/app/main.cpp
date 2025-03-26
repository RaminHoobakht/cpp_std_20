/* creating library */

#include "../header/main.hpp"
#include <iostream>
#include "../header/compare.hpp"


int main() {

    LINEFEED;

    int x{120};
    int y{40};

    int result{max(x, y)};
    std::cout << "max number is: " << result << NL;

    std::cout << "\n #(17:40:57): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
