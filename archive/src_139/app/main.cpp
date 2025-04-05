/*  */

#include <iostream>
#include "../header/person.hpp"
#include "../header/utillib.hpp"

int main() {

    LINEFEED;
    entity::person hinata{"Hinata", "Chikao", 54};
    entity::person albert{"Albert", "Einstein", 55};
    util::separator();

    hinata.display_person();
    albert.display_person();
    util::separator();

    hinata = albert;
    hinata.display_person();


    std::cout << "\n #(00:45:57): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
