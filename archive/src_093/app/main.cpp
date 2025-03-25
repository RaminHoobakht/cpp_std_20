/* using escape code */

#include "../header/main.hpp"
#include <iostream>


int main() {

    std::cout << "\a one \v two \t three \n four \n five \v \t \r six" << NL;

    std::cout << "\n #(13:29:09): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
