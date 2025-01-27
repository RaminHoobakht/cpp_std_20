#include <iostream>
#include <ctime>

#define nl '\n'

int main() {


    const std::time_t cur_time{time(nullptr)};
    std::srand(static_cast<unsigned int>(cur_time));

    for(std::size_t i{0llu}; i < 10llu; ++i) {
        std::cout << "random number is: " << std::rand() % 1000 << nl;
    }

    std::cout << "\n #STD20(12:02:32): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
