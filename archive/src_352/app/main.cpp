#include "main.hpp"


int main() {


    farshchian::base *base_one{new farshchian::derived{}};
    base_one->setup();

    auto result{base_one->get_value()};
    std::cout << "value of result is: " << result << NL;

    base_one->clean_up();

    delete base_one;

    pout << "\n #(03:54:54): The End ..." << eln;
    return EXIT_SUCCESS;
}



