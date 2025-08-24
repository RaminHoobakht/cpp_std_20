#include <cstdlib>
#include <iostream>

[[maybe_unused]] [[noreturn]] void f1() noexcept(false);
[[maybe_unused]] [[noreturn]] void f2() noexcept(false);
[[maybe_unused]] [[noreturn]] void f3() noexcept(false);
[[maybe_unused]] [[noreturn]] void exception_throw() noexcept(false);
[[nodiscard]] int exception_code(int err_code = 0) noexcept(true);


int main() {

    /* function call from here */
    try {
        f1();
    } catch (int ex) {
        std::cout << "Something went wrong main(). error code is: " << ex
                  << '\n';
    }

    std::cout << "\n #(06:04:43): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

[[maybe_unused]] [[noreturn]] void f1() noexcept(false) {
    std::cout << "starting f1() ..." << '\n';
    // try {
        f2();
    // } catch (int ex) {
    //     std::cout << "Something went wrong f1(). error code is: " << ex << '\n';
    // }
    std::cout << "ending f1() ..." << '\n';
}

[[maybe_unused]] [[noreturn]] void f2() noexcept(false) {
    std::cout << "starting f2() ..." << '\n';
    // try {
    f3();
    // } catch (int ex) {
    //     std::cout << "Something went wrong f2(). error code is: " << ex <<
    //     '\n';
    // }
    std::cout << "ending f2() ..." << '\n';
}

[[maybe_unused]] [[noreturn]] void f3() noexcept(false) {
    std::cout << "starting f3() ..." << '\n';
    // try {
    exception_throw();
    // } catch (int ex) {
    //     std::cout << "Something went wrong f3(). error code is: " << ex <<
    //     '\n';
    // }
    std::cout << "ending f3() ..." << '\n';
}

[[maybe_unused]] [[noreturn]] void exception_throw() noexcept(false) {
    std::cout << "exceptions start being thrown ..." << '\n';
    throw exception_code();
    std::cout << "end of exception throwing ..." << '\n';
}

[[nodiscard]] int exception_code(int err_code) noexcept(true) {
    return err_code;
}
