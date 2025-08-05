#include "main.hpp"


namespace inh {

    class raphael {

    public:
        int mutable pub_a{};
        int mutable pub_b{};
        int mutable pub_c{};

    private:
        [[maybe_unused]] int pri_d{};
        [[maybe_unused]] int pri_e{};
        [[maybe_unused]] int pri_f{};

    protected:
        int pro_g{};
        int pro_j{};
        int pro_k{};
    };


    class samuel : protected raphael {

    public:
        void pub_print_info() noexcept(true) {
            std::cout << "I am pub_print_info in samuel class ..." << '\n';
        }

    private:
        void pri_print_info() noexcept(true) {
            std::cout << "I am pri_print_info in samuel class ..." << '\n';
        }


    protected:
        void pro_print_info() noexcept(true) {
            std::cout << "I am pro_print_info in samuel class ..." << '\n';
        }
    };


} // namespace inh


[[maybe_unused]] int public_inhritance() {

    /*
     *   public inheritance:
     *       base(public)    ->  derived(public)
     *       base(private)   ->  stay int the base as private members
     *       base(protected) ->  derived(protected)
     * */

    constexpr inh::samuel my_samuel{};

    my_samuel.pub_a = 10;
    my_samuel.pub_b = 20;
    my_samuel.pub_c = 30;

    std::cout << "value of pub_a is: " << my_samuel.pub_a << '\n';
    std::cout << "value of pub_b is: " << my_samuel.pub_b << '\n';
    std::cout << "value of pub_c is: " << my_samuel.pub_c << '\n';
    SEP;

    pout << "\n #(07:49:49): The End ..." << eln;
    return EXIT_SUCCESS;
}

[[maybe_unused]] int private_inheritance() {

    /*
     *   private inheritance:
     *       base(public)    ->  derived(private)
     *       base(private)   ->  stay int the base as private members
     *       base(protected) ->  derived(private)
     * */

    [[maybe_unused]] constexpr inh::samuel my_samuel{};

    /*
     *  in private inheritance state, no members can viewed.
     *  because public and protected raphael class members 
     *  convert to private in derived class.
     *
     * */


    pout << "\n #(07:49:49): The End ..." << eln;
    return EXIT_SUCCESS;
}

int main() {

    /*
     *   protected inheritance:
     *       base(public)    ->  derived(protected)
     *       base(private)   ->  stay int the base as private members
     *       base(protected) ->  derived(protected)
     * */

    [[maybe_unused]] constexpr inh::samuel my_samuel{};
        

    /*
     *  in protected inheritance state, no members can viewed.
     *  because public and protected raphael class members convert 
     *  to protected in derived class.
     *
     * */


    pout << "\n #(07:49:49): The End ..." << eln;
    return EXIT_SUCCESS;
}
