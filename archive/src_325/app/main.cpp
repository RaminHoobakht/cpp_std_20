#include "main.hpp"


int main() {
    using number = entity::number;

    number number_one{120};
    number number_two{340};

    pout << "value of number_one is: " << number_one << NL;
    SEP;

    pout << "value of number_one is: " << number_two << NL;
    SEP;

    number number_three{number_one + number_two};
    pout << "number_one + number_two: " << number_three << NL;
    pout << "number_one + number_two: " << (number_one + number_two) << NL;
    SEP;
    SEP;

    pout << "(number_one == number_two): " << (number_one == number_two) << NL;
    pout << "(number_one > number_two) : " << (number_one > number_two) << NL;
    pout << "(number_one < number_two) : " << (number_one < number_two) << NL;
    pout << "(number_one >= number_two): " << (number_one >= number_two) << NL;
    pout << "(number_one <= number_two): " << (number_one <= number_two) << NL;
    pout << "(number_one != number_two): " << (number_one != number_two) << NL;
    SEP;


    pout << "\n #(22:06:33): The End ..." << eln;
    return EXIT_SUCCESS;
}

//(06:26:36)
