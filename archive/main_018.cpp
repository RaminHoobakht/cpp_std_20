#include <iostream>

int main() {

    constexpr signed short int var1{10};
    constexpr signed short int var2{10};

    constexpr signed char var3{40};
    constexpr signed char var4{50};

    std::cout << "size of var1 is: " << sizeof(var1) << '\n';
    std::cout << "size of var2 is: " << sizeof(var2) << '\n';
    std::cout << "size of var3 is: " << sizeof(var3) << '\n';
    std::cout << "size of var4 is: " << sizeof(var4) << '\n';

    auto result1{var1 + var2};
    auto result2{var3 + var4};

    std::cout << "size of result1 is: " << sizeof(result1) << '\n';
    std::cout << "size of result2 is: " << sizeof(result2) << '\n';

    std::cout << "\n #STD20(21:38:46): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
