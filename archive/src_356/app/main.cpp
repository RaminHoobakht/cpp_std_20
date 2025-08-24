#include <iostream>

namespace ramin {

    class Item {

    public:
        Item() noexcept(true) {
            std::cout << "Item constructor was called ..." << '\n';
        }

        ~Item() noexcept(true) {
            std::cout << "Item destructor was called ..." << '\n';
        }
    };


} // namespace ramin


int main() {

    int a{10};
    int b{0};

    try {
        ramin::Item item;

        if (b == 0) {
            throw 0;
        }

        a++;
        b++;

        std::cout << "Code that execute when things are fine ... " << std::endl;

    } catch (int ex) {
        std::cerr << "Something went wrong. Exception was thrown: " << ex
                  << std::endl;
    }

    std::cout << "\n The End ..." << std::endl;
    return EXIT_SUCCESS;
}
