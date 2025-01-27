#include <iostream>

#define nl '\n'

int main() {

    const char * const message[] {
        "I am a C/C++ Developer-001 ...",
        "I am a C/C++ Developer-002 ...",
        "I am a C/C++ Developer-003 ...",
        "I am a C/C++ Developer-004 ...",
        "I am a C/C++ Developer-005 ...",
        "I am a C/C++ Developer-006 ...",
        "I am a C/C++ Developer-007 ...",
        "I am a C/C++ Developer-008 ...",
        "I am a C/C++ Developer-009 ...",
        "I am a C/C++ Developer-010 ...",
    };

    for(size_t i{0llu}; i < 10llu; ++i) {
        std::cout << "the message is: " << message[i] << nl;
    }


    std::cout << "\n #STD20(10:58:41): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
