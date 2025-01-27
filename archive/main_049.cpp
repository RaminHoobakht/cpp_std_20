#include <iostream>

#define nl '\n'

int main() {

    int tool{30};

    switch (int my_num{20}; tool) {

        case 10: {
            std::cout << "I am 10 ..." << nl;
            std::cout << "my_num is: " << my_num << nl;
        } break;

        case 20: {
            std::cout << "I am 20 ..." << nl;
            std::cout << "my_num is: " << my_num << nl;
        } break;

        case 25: {
            std::cout << "I am 25 ..." << nl;
            std::cout << "my_num is: " << my_num << nl;
        } break;

        case 30: {
            std::cout << "I am 30 ..." << nl;
            std::cout << "my_num is: " << my_num << nl;
        } break;

        default: {
            std::cout << " I no not know how are you!!!! " << nl;
            std::cout << "my_num is: " << my_num << nl;
        }
    }


    std::cout << "\n #STD20(21:45:37): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
