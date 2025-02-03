#include <iostream>
#include "../header/main.hpp"

int main() {

    int age{53};
    const int &const_ref_to_age{age};

    std::cout << "value of age is: " << age << NL;
    std::cout << "value of const_ref_to_age is: " << const_ref_to_age << NL;

    std::cout << "incrementing age ..." << NL;
    age++;
    std::cout << "value of age is: " << age << NL;
    std::cout << "value of const_ref_to_age is: " << const_ref_to_age << NL;

    std::cout << "\n #(10:37:08): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
