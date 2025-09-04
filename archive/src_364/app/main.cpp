#include <iostream>
#include "box_container.hpp"


int main() {

    constexpr auto NL{'\n'};

    bc::box_container box_one{};
    box_one.add(1);
    box_one.add(2);
    box_one.add(3);

    std::cout << "box one: " << box_one << NL;
    std::cout << "-------------------------------" << NL;

    bc::box_container box_two{};
    box_two.add(10);
    box_two.add(20);
    box_two.add(30);

    std::cout << "box two: " << box_two << NL;
    std::cout << "-------------------------------" << NL;

    std::cout << "using operator +=" << NL;
    box_two += box_one;

    std::cout << "box two is: " << box_two << NL;
    box_two.add(50);
    std::cout << "box_two is: " << box_two << NL;
    std::cout << "-------------------------------" << NL;

    std::cout << "using operator +" << NL;
    std::cout << "box one is: " << box_one << NL;
    std::cout << "box two is: " << box_two << NL;

    bc::box_container box_three{};
    box_three.add(81);
    box_three.add(82);

    std::cout << "box three is: " << box_three << NL;
    // box_three = (box_one + box_two);
    auto result{box_one + box_two};
    std::cout << "(box_one + box_two): " << result << NL;
    // bc::box_container box_four{box_one + box_two};
    // std::cout << "box one + box two is: " << box_four << NL;
    std::cout << "-------------------------------" << NL;


    std::cout << "\n #(11:32:13): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

//(07:13:53)

//(07:15:34)
