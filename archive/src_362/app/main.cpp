#include <chrono>
#include <iostream>
#include <thread>

namespace cpp {

    __attribute_maybe_unused__ _GLIBCXX_NORETURN void
    terminate_program() noexcept(true);

    __attribute_maybe_unused__ _GLIBCXX_NORETURN void
    terminate_program() noexcept(true) {
        std::cout << "Starting exit from program operation ..." << '\n';
        std::cout << "Terminate the program for 10 seconds later ..." << '\n';
        std::this_thread::sleep_for(std::chrono::seconds(10));
        std::abort();
    }

} // namespace cpp


int main() {

    std::set_terminate(&cpp::terminate_program);

    throw 42;

    std::cout << "\n The End ..." << std::endl;
    return EXIT_SUCCESS;
}
