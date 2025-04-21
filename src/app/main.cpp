/* function pointer  */

#include "main.hpp"

namespace cpp {


    /* all time between T maximum(T a, T b) and 
     * T maximum (T &a, T &b) call function is ambiguous */

    // template<typename T>
    // T maximum(T a, T b) noexcept;

    template<typename T>
    T maximum(T &a, T &b) noexcept;

    /* -------------------- */

    // template<typename T>
    // T maximum(T a, T b) noexcept {
    // return (a > b) ? a : b;
    //}

    template<typename T>
    T maximum(T &a, T &b) noexcept {
        return (a > b) ? a : b;
    }


} // namespace cpp


int main() {

    int a{7};
    int b{5};

    int &pa{a};
    int &pb{b};


    auto result1{cpp::maximum(pa, pb)};

    out << "max is: " << result1 << NL;


    out << "\n #(02:28:09): The End ..." << eln;
    return EXIT_SUCCESS;
}
