/* passing template parameter by reference  */

#include "main.hpp"

/* in pointer and reference discussion, it can be changed
   data-type by adding 'const' qualifier. for example (int *p)
   and (const int *p) are two different data-type that distinguish
   by 'const' qualifier. I am trying to definition two template function
   by using of these both data types. */

namespace cpp {


    template<typename T>
    T &maximum(T &a, T &b) noexcept;

    template<typename T>
    const T &maximum(const T &a, const T &b) noexcept;

    /* ----------------------- */

    template<typename T>
    T &maximum(T &a, T &b) noexcept {
        out << "function name is: T &maximum(T &a, T &b): " << NL;
        return (a > b) ? a : b;
    }

    template<typename T>
    const T &maximum(const T &a, const T &b) noexcept {
        out << "function name is: const T &maximum(const T &a, const T &b): "
            << NL;
        return (a > b) ? a : b;
    }


} // namespace cpp


int main() {


    int int_a{120};
    int int_b{220};

    const int int_c{789};
    const int int_d{456};


    /* it works properly and there is no ambiguous
       in function invocation. */
    auto result_one{cpp::maximum(int_a, int_b)};
    out << "maximum is: " << result_one << NL;
    SEP;


    /* it works properly and there is no ambiguous
       in function invocation. */
    auto result_two{cpp::maximum(int_c, int_d:)};
    out << "maximum is: " << result_two << NL;
    SEP;


    out << "\n #(01:12:04): The End ..." << eln;
    return EXIT_SUCCESS;
}
