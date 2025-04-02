/* Returning from function */

#include <iostream>
#include "../header/utillib.hpp"

int &sum1(int a, int b) noexcept;
int sum2(int a, int b) noexcept;

int main() {

    int x{120};
    int y{220};

    /* local_result and the main_result have difference addresses */
    /* because main_result1 is not bind to the ouput of the sum1 function */
    int main_result1{sum1(x, y)};
    std::cout << "address of main_result1 is: " << &main_result1 << NL;
    std::cout << "value of main_result1 is: " << main_result1 << NL;
    util::separator(64, '*');

    /* local_result and the main_result have same address */
    /* because main_result2 is bind to the ouput of the sum1 function */
    int &main_result2{sum1(x, y)};
    std::cout << "address of main_result1 is: " << &main_result2 << NL;
    std::cout << "value of main_result1 is: " << main_result2 << NL;
    util::separator(64, '*');

    /* local_result and the main_result have difference addresses */
    int main_result3{sum2(x, y)};
    std::cout << "address of main_result3 is: " << &main_result3 << NL;
    std::cout << "value of main_result3 is: " << main_result3 << NL;


    std::cout << "\n #(16:45:40): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

int &sum1(int a, int b) noexcept {
    static int local_result{a + b};
    std::cout << "address of the local_result1: " << &local_result << NL;
    std::cout << "value of the local_result1  : " << local_result << NL;
    util::separator();
    return local_result;
}

int sum2(int a, int b) noexcept {
    int local_result{a + b};
    std::cout << "address of the local_result2: " << &local_result << NL;
    std::cout << "value of the local_result2  : " << local_result << NL;
    util::separator();
    return local_result;
}
