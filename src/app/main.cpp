#include "../header/main.hpp"
#include <iostream>


int main() {

    constexpr size_t min{0LLU};
    int temp{};
    int arr[]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};

    size_t length{std::size(arr)};
    size_t opr{(length / 2)};

    length % 2 ? opr++ : opr--;

    util::separator();

    for (size_t i{min}; i < length; ++i) {
        std::cout << *(arr + i) << '\x20';
    }
    std::cout << NL;

    util::separator();

    for (size_t first{min}, last{length - 1}; first <= opr; ++first, last--) {
        temp = *(arr + first);
        *(arr + first) = *(arr + last);
        *(arr + last) = temp;
    }

    for (size_t i{min}; i < length; ++i) {
        std::cout << *(arr + i) << '\x20';
    }
    std::cout << NL;

    util::separator();

    std::cout << "\n #(08:48:46): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
