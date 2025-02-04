#include <iostream>
#include "../header/main.hpp"

int main() {
    /* code */

    std::string str1{"Hello"};

    /* it can not be used constexpr keyword to define a std::string
     * data-type as a variable qualifire. because std::string refer to
     * the new keyword for allocating memory in heap. so, it is better to avoid
     * using std::string data-type for character manipulating to avoid
     * memory leak, memory fragmentation and pointer dangling that maybe occur.
     * du to these are dangerous for safety and security.
     * be aware and careful about every objects that allocate memory in heap.
     */
    const std::string str2{"I am a C++ Developer."};

    util::separator();
    (void) str1.append(" World");
    std::cout << "str1 is: " << str1 << NL;

    util::separator();
    (void) str1.append(5LLU, '?');
    std::cout << "str1 is: " << str1 << NL;

    util::separator();
    (void) str1.append(str2, 4LLU, 9LLU);
    std::cout << "str1 is: " << str1 << NL;


    std::cout << "\n #(09:37:06): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
