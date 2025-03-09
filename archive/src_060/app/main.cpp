#include "../header/main.hpp"
#include <exception>
#include <iostream>

namespace cpp {

    class myexception : public std::exception {

    private:
        std::string message_{};

    public:
        explicit myexception(std::string message) {
            this->message_ = std::move(message);
        }

        const char *what() const noexcept override {
            return this->message_.c_str();
        }
    };

} // namespace cpp


int main() {

    size_t number{};

    std::cout << "enter a number: ";
    std::cin >> number;

    while (number > 0) {

        if (number % 2 == 0) {
            throw cpp::myexception("the number should not be even ...");
        } else {
            std::cout << "there is no problem ..." << NL;
        }

        std::cout << "enter a number: ";
        std::cin >> number;
    }

    std::cout << "\n #(00:10:45): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
