#include <iostream>

#define nl '\n'

int main() {



    char message[]{"Hello World! ..."};

    std::cout << "message is: " << message << nl;
    std::cout << "*message: " << *message << nl;

    *message = 'B';

    std::cout << "message is: " << message << nl;
    std::cout << "*message: " << *message << nl;

    std::cout << "\n #STD20(01:50:12): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
