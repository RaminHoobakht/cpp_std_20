#include "main.hpp"


int main() {

    nelson::animal animal_one{"Animal One"};
    animal_one.breathe();
    SEP;

    nelson::feline feline_one{"Fur Style", "Feline One"};
    feline_one.breathe();
    feline_one.run();
    SEP;

    nelson::dog dog_one{"Fur Style", "Dog One"};
    dog_one.breathe();
    dog_one.run();
    dog_one.bark();
    SEP;

    nelson::cat cat_one{"Fur Style", "Cat One"};
    cat_one.breathe();
    cat_one.run();
    cat_one.miaw();
    SEP;

    nelson::bird bird_one{"Wind Color", "Bird one"};
    bird_one.breathe();
    bird_one.fly();
    SEP;

    nelson::pigeon pigeon_one{"Wing Color", "Pigeon One"};
    pigeon_one.breathe();
    pigeon_one.fly();
    pigeon_one.coo();
    SEP;

    nelson::crow crow_one{"Wing Color", "Crow ONe"};
    crow_one.breathe();
    crow_one.fly();
    crow_one.cow();
    SEP;

    nelson::bulldog bulldog_one{};
    bulldog_one.breathe();
    bulldog_one.run();
    bulldog_one.bark();
    SEP;

    pout << "\n #(22:41:44): The End ..." << eln;
    return EXIT_SUCCESS;
}
