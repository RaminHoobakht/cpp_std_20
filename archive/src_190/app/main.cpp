/*  function templates with overloading */

#include "main.hpp"

namespace cpp {

    /* normal template function */
    // template<typename T>
    // T maximum(T a, T b) noexcept(true);

    /* overload maximum template function with pass parameters by reference */
    template<typename T>
    T &maximum(T &a, T &b) noexcept(true);

    /* overload maximum template function with pass parameters by pointer */
    template<typename T>
    T *maximum(T *a, T *b) noexcept(true);

    /* overload maximum template function with specialization
       for (const char *) data-type */
    template<>
    const char *maximum(const char *a, const char *b) noexcept(true);
    /* ------------------ */

    // template<typename T>
    // T maximum(T a, T b) noexcept(true) {
    //     out << "template<typename T> T maximum(T a, T b) was invoked: " <<
    //     NL; return (a > b) ? a : b;
    // }

    template<typename T>
    T &maximum(T &a, T &b) noexcept(true) {
        out << "template<typename T> T &maximum(T &a, T &b) was invoked: "
            << NL;
        return (a > b) ? a : b;
    }

    template<typename T>
    T *maximum(T *a, T *b) noexcept(true) {
        out << "template<typename T> T *maximum(T *a, T *b) was invoked: "
            << NL;
        return (*a > *b) ? a : b;
    }

    template<>
    const char *maximum(const char *a, const char *b) noexcept(true) {
        out << "template<typename T> T *maximum<const char *>(const char *a, "
               "const char *b) was invoked: "
            << NL;
        return (std::strcmp(a, b) > 0) ? a : b;
    }


} // namespace cpp


int main() {

    int a{120};
    int b{220};

    int *pa{&a};
    int *pb{&b};

    const char *pchar_a("Hinata");
    const char *pchar_b{"Chikao"};

    auto result1{cpp::maximum(&a, &b)};
    out << "result1: " << *result1 << NL;
    SEP;

    auto result2{cpp::maximum(pa, pb)};
    out << "result2: " << *result2 << NL;
    SEP;

    auto result3{cpp::maximum(pchar_a, pchar_b)};
    out << "result3: " << result3 << NL;
    SEP;

    out << "\n #(20:18:24): The End ..." << eln;
    return EXIT_SUCCESS;
}
