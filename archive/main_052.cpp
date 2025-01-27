#include <iostream>
#include <ctime>

#define nl '\n'

int main() {


    std::time_t cur_time{time(nullptr)};
    
    /* srand input parameter accept unsigned int data-type */
    std::srand(static_cast<unsigned int>(cur_time));

    for(std::size_t i{0llu}; i < 10llu; ++i) {
        std::cout << "random number is: " << std::rand() << nl;
    }


    std::cout << "\n #STD20(11:28:20): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
