#include <iostream>
#include "../header/main.hpp"


int main() {
    const auto *heap_number{new int{120}};

    std::cout << "value of the heap_number is: " << *heap_number << NL;

    heap_number = new int{700};
    util::separator();
    std::cout << "value of the heap_number is: " << *heap_number << NL;

    delete heap_number;
    heap_number = nullptr;

    std::cout << "\n #(03:51:06): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
