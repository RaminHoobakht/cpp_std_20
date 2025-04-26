/* Subject: type traits  */

#include "main.hpp"


int main() {

    LF;
    int x{120};
    cpp::print_number(x);
    SEP;

    auto func = []<typename T>(T a, T b) {
        static_assert(std::is_integral_v<T>,
                      "call it only with integral data type");
        return a + b;
    };

    const auto result_one{func(10.2, 20)};
    out << "value of result one is: " << result_one << NL;

    out << "\n #(22:41:26): The End ..." << eln;
    return EXIT_SUCCESS;
}
