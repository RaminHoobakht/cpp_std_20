#include "main.hpp"


int main() {

    nelson::animal animal_one{"Animal One"};
    animal_one.breathe();
    pout << "value of animal_one is: " << animal_one << NL;
    SEP;

    nelson::feline feline_one{"Fur Style", "Feline One"};
    feline_one.breathe();
    feline_one.run();
    pout << "value of feline_one is: " << feline_one << NL;
    SEP;

    nelson::dog dog_one{"Fur Style", "Dog One"};
    dog_one.breathe();
    dog_one.run();
    dog_one.bark();
    pout << "value of dog_one is: " << dog_one << NL;
    SEP;

    nelson::cat cat_one{"Fur Style", "Cat One"};
    cat_one.breathe();
    cat_one.run();
    cat_one.miaw();
    pout << "value of cat_one is: " << cat_one << NL;
    SEP;

    nelson::bird bird_one{"Wind Color", "Bird one"};
    bird_one.breathe();
    bird_one.fly();
    pout << "value of bird_one is: " << bird_one << NL;
    SEP;

    nelson::pigeon pigeon_one{"Wing Color", "Pigeon One"};
    pigeon_one.breathe();
    pigeon_one.fly();
    pigeon_one.coo();
    pout << "value of pigeon_one is: " << pigeon_one << NL;
    SEP;

    nelson::crow crow_one{"Wing Color", "Crow ONe"};
    crow_one.breathe();
    crow_one.fly();
    crow_one.cow();
    pout << "value of crow_one is: " << crow_one << NL;
    SEP;

    nelson::bulldog bulldog_one{};
    bulldog_one.breathe();
    bulldog_one.run();
    bulldog_one.bark();
    pout << "value of bulldog_one is: " << bulldog_one << NL;
    SEP;

    pout << "\n #(22:41:44): The End ..." << eln;
    return EXIT_SUCCESS;
}
