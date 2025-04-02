/* getting data out of function */

#include <iostream>
#include "../header/utillib.hpp"

// int &sum1(int &a, int &b) noexcept;
int &sum2(int &a, int &b) noexcept;

int main() {

    int x{120};
    int y{240};

    int main_result1{sum2(x, y)++};
    std::cout << "value main_result is: " << main_result1 << NL;
    util::separator();

    int main_result2{sum2(x, y)};
    std::cout << "value main_result is: " << main_result2 << NL;
    util::separator();

    std::cout << "\n #(15:02:45): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

// int &sum1(int &a, int &b) noexcept {
//     int local_result{a + b};
//     return static_cast<int &>(local_result);
// }

int &sum2(int &a, int &b) noexcept {
    static int local_result{a + b};
    return static_cast<int &>(local_result);
}
