/* passing parameter to the main function */

#include <iostream>
#include "../header/utillib.hpp"


int main(const int argc, const char **argv) {

    std::cout << "The number of the parameter is: " << argc << NL;

    std::cout << "index  notation-> parameter is: " << argv[0] << NL;
    std::cout << "offset notation-> parameter is: " << *(argv + 0) << NL;

    std::cout << "\n #(17:03:33): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
