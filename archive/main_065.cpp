#include <iostream>

#define nl '\n'

int main() {

    char const *message[]{
            "I am a C/C++ Devleoper 0 ...", "I am a C/C++ Devleoper 1 ...",
            "I am a C/C++ Devleoper 2 ...", "I am a C/C++ Devleoper 3 ...",
            "I am a C/C++ Devleoper 4 ...", "I am a C/C++ Devleoper 5 ...",
            "I am a C/C++ Devleoper 6 ...", "I am a C/C++ Devleoper 7 ...",
            "I am a C/C++ Devleoper 8 ...",
    };

    for (size_t i{0llu}; i < 9llu; ++i) {
        std::cout << message[i] << nl;
    }
    /* enconuter with compile time error. because message is const */ 
    // message[0] = 'Y';

//     char const *new_message[]{
//             "I am a C++ Devleoper 0 ...", "I am a C++ Devleoper 1 ...",
//             "I am a C++ Devleoper 2 ...", "I am a C++ Devleoper 3 ...",
//             "I am a C++ Devleoper 4 ...", "I am a C++ Devleoper 5 ...",
//             "I am a C++ Devleoper 6 ...", "I am a C++ Devleoper 7 ...",
//             "I am a C++ Devleoper 8 ...",
//     };

    char const *new_message{"I am C++ Developer ..."};
    message[0] = new_message;
    std::cout << "message[0]: "<< message[0];

    std::cout << "\n #STD20(16:02:46): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
