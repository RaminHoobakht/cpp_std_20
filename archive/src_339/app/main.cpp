#include "main.hpp"
#include "daniel.hpp"

int main() {

    inh::daniel my_daniel{10, 20, 30, 40, 50, 60};

    pout << "value of my daniel is: " << my_daniel << NL;

    pout << "\n #(11:34:43): The End ..." << eln;
    return EXIT_SUCCESS;
}
