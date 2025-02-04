#include <iostream>
#include <cstring>
#include "../header/main.hpp"

int main() {
    /* code */

    constexpr char message_one[]{"I am a C/C++ Developer ..."};

    /* const auto when infer (char*) is equivalent to
      (const char * const) data-type */
    const auto message_two{"I am a C/C++ Developer ..."};

    /* sizeof is printed out the capacity of the message_one
     * not length of the characters was stored in the variable.
     */
    std::cout << "size of message one: " << sizeof(message_one) << NL;

    /* strlen exactly print out the length of the character that stored in
     * the message_one. not it's capacity.
     */
    std::cout << "length of message one: " << std::strlen(message_one) << NL;

    std::cout << "size of message two: " << sizeof(message_two) << NL;
    std::cout << "length of message two: " << std::strlen(message_two) << NL;

    std::cout << "\n #(20:32:01): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
