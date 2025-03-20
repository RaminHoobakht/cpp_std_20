#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string name{"12345678901234567890"};

    std::cout << "before erase: " << name << NL;

    name.erase(5, 5);

    std::cout << "after erase : " << name << NL;

    std::cout << "\n #(17:40:26): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
