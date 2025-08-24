#include <iostream>
#include <memory>

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

namespace mariam {

    class MyException {

        // private:
        //     MyException(const MyException &other) noexcept(true) {}

    public:
        MyException() noexcept(true) {}

        MyException(const MyException &other) noexcept(true) {}
    };

} // namespace mariam


int main() {

    // int a{10};
    // int b{0};

    // try {
    //     ramin::Item item;

    //     if (b == 0) {
    //         throw 0;
    //     }

    //     a++;
    //     b++;

    //     std::cout << "Code that execute when things are fine ... " <<
    //     std::endl;

    // } catch (int ex) {
    //     std::cerr << "Something went wrong. Exception was thrown: " << ex
    //               << std::endl;
    // }


    /* ------------------------------------ */

    // int c{0};

    // try {

    //     int var{55};
    //     int *var_ptr{&var};

    //     if (c == 0) {
    //         throw var_ptr;
    //     }

    //     std::cout << "Keep doing some other things ..." << std::endl;

    // } catch (int *ex) {
    //     std::cout << "Something went wrong. Exception thrown: " << *ex
    //               << std::endl;
    // }


    /* ------------------------------------ */

    // int d{0};

    // try {

    //     // __attribute_maybe_unused__ ramin::Item *item{new ramin::Item{}};

    //     __attribute_maybe_unused__ std::unique_ptr<ramin::Item> item_ptr{
    //             std::make_unique<ramin::Item>()};

    //     if (d == 0) {
    //         throw 0;
    //     }

    //     std::cout << "Keep doing some other things ..." << std::endl;

    // } catch (int ex) {
    //     std::cout << "Something went wrong. Exception thrown: " << ex
    //               << std::endl;
    // }


    try {

        mariam::MyException my_exception;
        throw my_exception;

    } catch (mariam::MyException ex) {
        std::cerr << "Something went wrong ..." << '\n';
    }


    std::cout << "\n #(02:19:56): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
