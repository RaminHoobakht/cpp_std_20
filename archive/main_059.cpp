#include <iostream>

#define nl '\n'

int main() {

    /* without const keyword it encountered with compile error */
    const char *message{"I am a C/C++ Developer ..."};

    std::cout << "the message is: " << message << nl;

    std::cout << "\n #STD20(10:28:09): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
