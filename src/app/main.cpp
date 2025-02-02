#include <iostream>
#include "../header/main.hpp"


int main() {
    constexpr size_t buffer_size{10'000'000'000'000LLU};

    if (const auto array{new(std::nothrow) int[buffer_size]{}}; array == nullptr) {
        std::cout << "allocate memory on heap is failed ..." << NL;
    } else {
        std::cout << "allocate memory on heap successfully ..." << NL;
    }

    std::cout << "\n #(03:25:40): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
