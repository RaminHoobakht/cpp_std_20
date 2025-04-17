/* function template  */

#include "main.hpp"


namespace cpp {

    template<typename T>
    T max(T a, T b) noexcept;


    template<typename T>
    T max(T a, T b) noexcept {
        return (a > b) ? a : b;
    }
} // namespace cpp


int main() {

    int a{120};
    int b{220};

    auto result{cpp::max(a, b)};

    out << "value of result is: " << result << NL;
    SEP;

    /* ---------------- */

    long x{1256};
    long y{1350};

    auto result2{cpp::max(x, y)};
    out << "value of result2 is: " << result2 << NL;

    /* ---------------- */

    std::string name_one{"Hinata"};
    std::string name_two{"Chikao"};

    auto result3{cpp::max(name_one, name_two)};
    out << "value of result3 is: " << result3 << NL;


    out << "\n #(00:00:00): The End ..." << end;
    return EXIT_SUCCESS;
}
