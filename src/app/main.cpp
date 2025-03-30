/* default function arguments */

#include <iostream>
#include "../header/utillib.hpp"

void compute(int age = 54, double weight = 70.5,
             double distance = 4) noexcept(true);

int main() {

    compute(30);

    std::cout << "\n #(11:37:33): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

void compute(const int age, const double weight,
             const double distance) noexcept(true) {
    std::cout << "Doing computing on age     : " << age << NL;
    std::cout << "Doing computing on weight  : " << weight << NL;
    std::cout << "Doing computing on distance: " << distance << NL;
}
