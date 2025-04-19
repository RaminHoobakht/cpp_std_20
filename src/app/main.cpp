/* function template  */

#include "main.hpp"

namespace cpp {


    template<typename ReturnType, typename T, typename P>
    ReturnType maximum(T a, P b) noexcept;

    /* ------------------ */

    template<typename ReturnType, typename T, typename P>
    ReturnType maximum(T a, P b) noexcept {
        return (a > b) ? a : b;
    }


} // namespace cpp


int main() {

    auto result1{cpp::maximum<int>(120, 220)};
    out << "value of result1 is: " << result1 << NL;

    out << "\n #(23:54:00): The End ..." << eln;
    return EXIT_SUCCESS;
}
