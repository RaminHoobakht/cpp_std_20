#include "../header/main.hpp"
#include <exception>
#include <iostream>
#include <string>

namespace cpp {

    class myexception final : public std::exception {

    private:
        std::string message_{};

    public:
        explicit myexception(std::string message) :
            message_(std::move(message)) {}

        const char *what() const noexcept override {
            return this->message_.c_str();
        }
    };


} // namespace cpp


int main() {

    size_t number{1};

    while (number > 0) {

        LINEFEED;
        SEP;

        std::cout << "enter a number to test: ";
        std::cin >> number;

        try {
            if (number % 7 == 0) {
                throw cpp::myexception("Invalid number ...");
            } else {
                std::cout << "You type: " << number << NL;
            }

        } catch (cpp::myexception &ex) {
            std::cerr << ex.what() << NL;
        }
    }

    std::cout << "\n #(22:16:04): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
