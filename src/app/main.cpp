#include <iostream>

#define nl '\n'

int main() {

    char const *message[]{
            "I am a C/C++ Developer 01 ...", "I am a C/C++ Deveolper 02 ...",
            "I am a C/C++ Developer 03 ...", "I am a C/C++ Deveolper 04 ...",
            "I am a C/C++ Developer 05 ...", "I am a C/C++ Deveolper 06 ...",
            "I am a C/C++ Developer 07 ...", "I am a C/C++ Deveolper 08 ...",
            "I am a C/C++ Developer 09 ...",
    };

    for (size_t row{0llu}, col{0llu}; row < 9; ++row) {
        // std::cout << message[i] << nl;

        /* message[row][col] */
        std::cout << message[row][col] << nl;
    }

    std::cout << "----------------------------------------" << nl;
    message[0] = "I am a Asembly Developer ... ";


    for (size_t row{0llu}; row < 9; ++row) {
        std::cout << message[row] << nl;
    }

    std::cout << "\n #STD20(16:23:05): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
