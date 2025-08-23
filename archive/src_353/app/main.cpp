#include "main.hpp"
#include <typeinfo>

namespace farshchian_one {

    class dynamic_base {

    public:
        virtual void do_something() const noexcept(true) {
            std::cout << "dynamic_base::do_something() was called ..." << NL;
        }

        virtual ~dynamic_base() noexcept(true) = default;
    };

    /* -------- */

    class dynamic_derived : public dynamic_base {

    public:
        void do_something() const noexcept(true) override {
            std::cout << "dynamic_derived::do_something() was called ..." << NL;
        }

        ~dynamic_derived() noexcept(true) override = default;
    };

} // namespace farshchian_one


namespace farshchian_two {

    class static_base {
    public:
        void do_something() const noexcept(true) {
            std::cout << "static_base::do_something() was called ..." << '\n';
        }
    };

    /* -------- */

    class static_derived : public static_base {
    public:
        void do_something() const noexcept(true) {
            std::cout << "static_derived::do_something() was called ..."
                      << '\n';
        }
    };

} // namespace farshchian_two


int main() {

    std::cout << "int type name is: " << typeid(int).name() << '\n';

    if (typeid(22) == typeid(int)) {
        pout << "number 22 data type is int ..." << NL;
    } else {
        pout << "number 22 data type is not an int ..." << NL;
    }

    SEP;

    farshchian_one::dynamic_derived dynamic_drv{};
    farshchian_one::dynamic_base &dynamic_drv_ref{dynamic_drv};

    pout << "type of dynamic_drv is: " << typeid(dynamic_drv).name() << NL;
    pout << "type of dynamic_drv_ref is: " << typeid(dynamic_drv_ref).name()
         << NL;

    SEP;

    farshchian_one::dynamic_base *dynamic_base_one{
            new farshchian_one::dynamic_derived{}};

    pout << "type of dynamic_base_one is: " << typeid(dynamic_base_one).name()
         << NL;

    pout << "type of *dynamic_base_one is: " << typeid(*dynamic_base_one).name()
         << NL;

    SEP;

    

    pout << "\n #(00:04:33): The End ..." << eln;
    return EXIT_SUCCESS;
}