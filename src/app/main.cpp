/* using row string */

#include "../header/main.hpp"
#include <iostream>


int main() {

    const std::string message1{
            R"---((did) you know? (Python is a "very 
                  good language indeed.)")---"};

    std::cout << message1 << NL;

    std::cout << "\n #(14:17:18): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
