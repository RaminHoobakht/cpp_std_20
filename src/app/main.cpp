/* Subject:   */

#include "main.hpp"
#include "src/entity/person/person.hpp"


int main() {

    LF;

    entity::person person_one{"Hinata", "Chikao", 1001, 25};
    entity::person person_two{"Raphael", "Black", 1002, 26};
    entity::person person_three{"Samuel", "Green", 1003, 27};

    entity::person *persons[]{&person_one, &person_two, &person_three};

    for (const entity::person *item: persons) {
        item->display_person();
    }


    out << "\n #(16:21:04): The End ..." << eln;
    return EXIT_SUCCESS;
}
