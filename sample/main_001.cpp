/* function template  */

#include "sample_src/app/main.hpp"

int main() {


    LF;

    out << "loop start ..." << NL;

    std::chrono::time_point<std::chrono::system_clock> start_time{
            std::chrono::system_clock::now()};

    for (size_t i{1LU}; i < 5'790'000'000LU; ++i) {
        if (i / i == 0) {
            out << "Wonderful ..." << NL;
        }
    }

    std::chrono::time_point<std::chrono::system_clock> end_time{
            std::chrono::system_clock::now()};

    out << "loop was ended ..." << NL;

    out << "Time Distance is: " << (end_time - start_time) << NL;


    out << "\n #(23:54:00): The End ..." << eln;
    return EXIT_SUCCESS;
}
