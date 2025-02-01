#include "../header/main.hpp"
#include <iostream>


int main() {

    int array[]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int *p_array_one{array + 4};
    int *p_array_two{array + 9};

    util::separator();

    std::cout
            << "Direct print all result of six below expression by std::cout: "
            << NL;
    std::cout << std::boolalpha;
    std::cout << "p_array_one < p_array_two : " << (p_array_one < p_array_two)
              << NL;
    std::cout << "p_array_one > p_array_two : " << (p_array_one > p_array_two)
              << NL;
    std::cout << "p_array_one <= p_array_two: " << (p_array_one <= p_array_two)
              << NL;
    std::cout << "p_array_one >= p_array_two: " << (p_array_one >= p_array_two)
              << NL;
    std::cout << "p_array_one == p_array_two: " << (p_array_one == p_array_two)
              << NL;
    std::cout << "p_array_one != p_array_two: " << (p_array_one != p_array_two)
              << NL;

    std::ptrdiff_t result1{p_array_one < p_array_two};
    std::ptrdiff_t result2{p_array_one > p_array_two};
    std::ptrdiff_t result3{p_array_one <= p_array_two};
    std::ptrdiff_t result4{p_array_one >= p_array_two};
    std::ptrdiff_t result5{p_array_one == p_array_two};
    std::ptrdiff_t result6{p_array_one != p_array_two};

    util::separator();
    std::cout << "Using ptrdiff_t to stroe and print all six result: " << NL;
    std::cout << "p_array_one < p_array_two : " << result1 << NL;
    std::cout << "p_array_one > p_array_two : " << result2 << NL;
    std::cout << "p_array_one <= p_array_two: " << result3 << NL;
    std::cout << "p_array_one >= p_array_two: " << result4 << NL;
    std::cout << "p_array_one == p_array_two: " << result5 << NL;
    std::cout << "p_array_one != p_array_two: " << result6 << NL;


    std::cout << "\n #(13:15:29): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
