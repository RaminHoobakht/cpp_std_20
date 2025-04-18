/* template function call explicitly  */

#include "main.hpp"

namespace cpp {

    template<typename T>
    T max(T a, T b) noexcept;

    /* ----------------------- */

    template<typename T>
    T max(T a, T b) noexcept {

        return (a > b) ? a : b;
    }


} // namespace cpp


int main() {

    int int_x{20};
    int int_y{50};

    double dbl_x{90.36};
    double dbl_y{80.25};

    std::string str_x{"Hinata"};
    std::string str_y{"Chikao"};

    auto result1{cpp::max(int_x, int_y)};
    auto result2{cpp::max(dbl_x, dbl_y)};
    auto result3{cpp::max(str_x, str_y)};

    out << "value of result1 is: " << result1 << NL;
    out << "value of result2 is: " << result2 << NL;
    out << "value of result3 is: " << result3 << NL;

    auto result4{cpp::max<int>(41, 22)};
    
    /* explicit call template function possible implicit conversion  */
    auto result5{cpp::max<double>(int_x, dbl_x)};
    
    /* but it not possible to convert a double data type to std::string  */
    // auto result6{cpp::max<std::string>(str_x, dbl_x)};

    out << "\n #(00:00:00): The End ..." << eln;
    return EXIT_SUCCESS;
}
