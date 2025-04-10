/* optional value: declare and initialize */

#include <iostream>
#include <optional>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr


int main() {

    LF;

    /* declare and initialize with a corresponding value */
    std::optional<int> items{3};
    std::optional<str> name{"Daniel Gakwaya"};
    std::optional<double> weight{77.23};
    std::optional<char> character{'s'};

    /* declare and empty initialize */
    std::optional<str> dog_name{};
    std::optional<int> age{std::nullopt};
    std::optional<char> letter{std::nullopt};
    std::optional<double> height = {};


    out << "items: " << items.value() << NL;
    out << "name: " << name.value() << NL;
    out << "weight: " << weight.value() << NL;
    out << "character: " << character.value() << NL;
    SEP;

    dog_name = "tida";
    age = 54;
    height = 33.36;

    if (dog_name.has_value()) {
        out << "dog name is: " << dog_name.value() << NL;
    } else {
        out << "dog name has no value " << NL;
    }

    if (age != std::nullopt) {
        out << "value of age is: " << age.value() << NL;
    } else {
        out << "age has no value " << NL;
    }

    if (letter.has_value()) {
        out << "value fo letter is: " << letter.value() << NL;
    } else {
        out << "letter has no value " << NL;
    }

    if (height != std::nullopt) {
        out << "value of height is: " << height.value() << NL;
    } else {
        out << "height has no value " << NL;
    }

    SEP;

    std::cout << "\n #(18:18:16): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
