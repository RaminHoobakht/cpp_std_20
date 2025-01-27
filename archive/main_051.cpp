#include <iostream>
#include <ctime>

#define nl '\n'

int main() {

    std::time_t cur_time{std::time(nullptr)};
    std::srand(static_cast<unsigned int>(cur_time));

    for(size_t i{0llu}; i < 5llu; ++i) {
        std::cout << "random number is: " << std::rand() << nl;
    }

    std::cout << "\n #STD20(10:37:05): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
