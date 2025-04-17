/* function template  */

#include "main.hpp"

namespace cpp {

    template<typename T>
    T max(T a, T b) noexcept;

    /* -------------------  */

    template<typename T>
    T max(T a, T b) noexcept {
        return (a > b) ? a : b;
    }

} // namespace cpp


int main() {

    int x{30};
    int y{20};

    int *p_x{&x};
    int *p_y{&y};

    /* passing pointer to the template function maybe gives 
       unpredictable result. if parameters be pointer, 
       the algorithm of the relevant function, compare both 
       variable address instead of the values.
       regardless of their values, always the greater 
       address number will be returned. */
    auto result{cpp::max(p_y, p_x)};

    out << "address of result is: " << result << NL;
    out << "value of result is  : " << *result << NL;

    out << "\n #(22:48:16): The End ..." << end;
    return EXIT_SUCCESS;
}
