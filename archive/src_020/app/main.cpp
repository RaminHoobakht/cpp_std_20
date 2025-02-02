#include "../header/main.hpp"
#include <iostream>


int main() {


    if (int *ptr_number{}; !(ptr_number == nullptr)) {
        std::cout << " ptr_number has valid address ..." << NL;
    } else {
        std::cout << " ptr_number has invalid address ..." << NL;
    }

    util::separator();

    if (int *ptr_number{new int{120}}; !(ptr_number == nullptr)) {
        std::cout << " ptr_number has valid address ..." << NL;
    } else {
        std::cout << " ptr_number has invalid address ..." << NL;
    }

    std::cout << "\n #(03:35:56): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
