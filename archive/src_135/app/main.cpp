/* getting data out of function */

#include <iostream>
#include "../header/utillib.hpp"

int &sum1(int &a, int &b) noexcept;
const int &sum2(int &a, int &b) noexcept;
const int &sum3(const int &a, const int &b) noexcept;

int main() {

    int x{120};
    int y{220};

    int main_result1{sum1(x, y)};
    std::cout << "value of main_result1 is: " << main_result1 << NL;
    util::separator();

    int main_result2{sum2(x, y)};
    std::cout << "value of main_result2 is: " << main_result2 << NL;
    util::separator();

    int main_result3{sum3(x, y)};
    std::cout << "value of main_result3 is: " << main_result3 << NL;
    util::separator();


    std::cout << "\n #(15:21:27): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

int &sum1(int &a, int &b) noexcept {
    static int local_result{a + b};
    return local_result;
}

const int &sum2(int &a, int &b) noexcept {
    static int local_result{a + b};
    return local_result;
}

const int &sum3(const int &a, const int &b) noexcept {
    static int local_result{a + b};
    return local_result;
}
