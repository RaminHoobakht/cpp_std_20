#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string name_one{"Hinata"};
    std::string name_two{"Hinata"};

    const int result1{name_one.compare(0, 6, name_two)};

    std::cout << "value result one is: " << result1 << NL;

    name_one.clear();
    name_two.clear();

    name_one = "Renata";
    name_two = "Tinata";

    const int result2{name_one.compare(2, 4, name_two)};

    std::cout << "value result two is: " << result2 << NL;


    std::cout << "\n #(22:42:39): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
