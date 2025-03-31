/* passing parameter to the main function */

#include <iostream>
#include "../header/utillib.hpp"


int main(const int argc, const char **argv) {

    LINEFEED;
    std::cout << "Number of parameters is: " << argc << NL;
    util::separator();

    std::cout << "Parameter list: " << NL;
    for (size_t i{util::zero}; i < static_cast<size_t>(argc); ++i) {
        std::cout << *(argv + i) << NL;
    }
    LINEFEED;

    std::cout << "\n #(19:23:47): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
