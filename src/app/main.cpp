/* function parameter passing  */

#include "main.hpp"

namespace cpp {

    template<typename T>
    T maximum(T a, T b) noexcept;

    /* --------------------- */

    template<typename T>
    T maximum(T a, T b) noexcept {
        return (a > b) ? a : b;
    }


} // namespace cpp


int main() {

    int a{640};
    int b{320};

    int *pa{&a};

    /* address of pb is greater than pa. Then it is always
     * returned pb regardless of the values.Solution of
     * this problem is, specialization of template function
     * for pointer parameter passing */
    int *pb{&b};


    auto result1{cpp::maximum(pa, pb)};
    out << "max is: " << *result1 << NL;


    out << "\n #(18:36:04): The End ..." << eln;
    return EXIT_SUCCESS;
}
