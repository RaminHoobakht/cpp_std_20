/* using namespace in down and up the main function */


#include "main.hpp"


/* it can be divide namespace in two part
    one part for function declaration and the 
    other one for function definition. */

namespace cpp {

    template<typename T>
    T maximum(T a, T b) noexcept;

}


int main() {

    int a{120};
    int b{320};

    auto result{cpp::maximum(a, b)};
    out << "maximum is: " << result << NL;

    out << "\n #(02:20:03): The End ..." << eln;
    return EXIT_SUCCESS;
}

namespace cpp {

    template<typename T>
    T maximum(T a, T b) noexcept {
        return (a > b) ? a : b;
    }

} // namespace cpp
