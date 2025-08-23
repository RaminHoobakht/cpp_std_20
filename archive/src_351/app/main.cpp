#include "main.hpp"

void do_something_with_animal_ref(farshchian::animal &animal) noexcept(false);
void do_something_with_animal_ptr(farshchian::animal *animal) noexcept(false);

int main() {

    farshchian::feline feline_one{"Fur Style", "Feline One"};
    farshchian::animal &animal_ref{feline_one};
    do_something_with_animal_ref(animal_ref);
    SEP;

    farshchian::animal *animal_ptr{
            new farshchian::feline{"Fur Style", "Feline Two"}};
    do_something_with_animal_ptr(animal_ptr);
    SEP;
    
    delete animal_ptr;

    pout << "\n #(19:43:44): The End ..." << eln;
    return EXIT_SUCCESS;
}

/* -------- */

void do_something_with_animal_ref(farshchian::animal &animal) noexcept(false) {
    std::cout << "in function taking base reference ... " << '\n';
    farshchian::feline *feline_one{dynamic_cast<farshchian::feline *>(&animal)};
    if (feline_one) {
        feline_one->do_some_feline_thingy();
    } else {
        std::cout << "could not cast to feline from animal reference, sorry ..."
                  << '\n';
    }
}

/* -------- */

void do_something_with_animal_ptr(farshchian::animal *animal) noexcept(false) {
    std::cout << "in function taking base pointer ... " << '\n';
    farshchian::feline *feline_one{dynamic_cast<farshchian::feline *>(animal)};
    if (feline_one) {
        feline_one->do_some_feline_thingy();
    } else {
        std::cout << "could not cast to feline from animal pointer, sorry ..."
                  << '\n';
    }
}

//(03:53:31)
