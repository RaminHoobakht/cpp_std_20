#include "main.hpp"


int main() {

    ramin::dog my_dog{"dog style", "Dog One"};
    ramin::cat my_cat{"cat style", "Cat One"};
    ramin::pigeon my_pigeon{"pigeon style", "Pigeon One"};
    ramin::crow my_crow{"crow style", "Crow One"};


    // ramin::animal *animals[]{&my_dog, &my_cat, &my_pigeon, &my_crow};

    for (ramin::animal *animals[]{&my_dog, &my_cat, &my_pigeon, &my_crow};
         ramin::animal *item: animals) {
        item->breathe();
        SEP;
    }

    LF_SEP_LF;

    for (ramin::feline *felines[]{&my_dog, &my_cat};
         ramin::feline *item: felines) {
        item->run();
        SEP;
    }

    LF_SEP_LF;

    for (ramin::bird *birds[]{&my_pigeon, &my_crow}; ramin::bird *item: birds) {
        item->fly();
        SEP;
    }

    pout << "\n #(20:39:59): The End ..." << eln;
    return EXIT_SUCCESS;
}
