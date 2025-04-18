/* template specialization  */

#include "main.hpp"
#include <cstring>

namespace cpp {

    template<typename T>
    T maximum(T a, T b) noexcept;

    template<>
    const char *maximum<const char *>(const char *a, const char *b) noexcept;


    /* ------------------- */

    template<typename T>
    T maximum(T a, T b) noexcept {
        out << "T maximum(T a, T b) was invoked: " << NL;
        return (a > b) ? a : b;
    }

    template<>
    const char *maximum(const char *a, const char *b) noexcept {
        out << "const char *maximum(const char *a, const char *b) was invoked: "
            << NL;
        return (std::strcmp(a, b) > 0) ? a : b;
    }


} // namespace cpp


int main() {

    int a{120};
    int b{220};

    std::string str_a{"Hinata"}; // 597
    std::string str_b{"Chikao"}; // 591

    const char *pchar_a{"Hinata"};
    const char *pchar_b{"Chikao"};

    auto result1{cpp::maximum(a, b)};
    out << "value of result one  : " << result1 << NL;
    SEP;

    auto result2{cpp::maximum(str_a, str_b)};
    out << "value of result two  : " << result2 << NL;
    SEP;

    auto result3{cpp::maximum(pchar_a, pchar_b)};
    out << "value of result three: " << result3 << NL;
    SEP;

    out << "\n #(13:59:39): The End ..." << eln;
    return EXIT_SUCCESS;
}
