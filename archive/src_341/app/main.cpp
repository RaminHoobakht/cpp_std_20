#include "main.hpp"

namespace albert {

    class raphael {

    protected:
        int x_{150};

    public:
        raphael() noexcept(true) {}
        void print_x() const noexcept(true) {
            pout << "value of x is: " << x_ << NL;
        }
    };

    class daniel : public raphael {

    private:
        int x_{350};

    public:
        daniel() noexcept(true) {}
        
        void print_x() const noexcept(true) {
            pout << "value of x is: " << x_ << NL;
        }

        void show_values() const noexcept(true) {
            pout << "value of x in daniel is: " << x_ << NL;
            pout << "value of x in raphael is: " << raphael::x_ << NL;
        }

    };


} // namespace albert


int main() {
    /* code */

    albert::daniel my_daniel{};

    /* call derived class print_x */
    my_daniel.print_x(); 

    /* call base class print_x */
    my_daniel.raphael::print_x(); 
    SEP;

    /* show values of both x's */
    my_daniel.show_values(); 


    pout << "\n #(02:52:10): The End ..." << eln;
    return EXIT_SUCCESS;
}
