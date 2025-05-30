/*
 *  Subject: linkage option:
 *
 * */

#include "main.hpp"


int main() {

    /*
        entity::person *hinata{new entity::person{"Hinata", "Chikao", 1001,
       54}}; std::unique_ptr<entity::person> hinata_one{hinata};

        hinata_one->display_person();
        hinata_one.reset();
     */

    /*
        std::unique_ptr<entity::person> hinata{
                new entity::person{"Hinata", "Chikao", 1001, 54}};
        SEP;
        hinata.get()->display_person();
        SEP;
        hinata->display_person();
        SEP;
     */

    /*
       std::unique_ptr<entity::person> hinata{
               std::make_unique<entity::person>("Hinata", "Chikao", 1001, 54)};
       SEP;
       hinata->display_person();
       SEP;
       hinata.reset();
       SEP;
    */

    /*
    entity::person *hinata{new entity::person{"Hinata", "Chikao", 1001, 54}};
    SEP;

    std::unique_ptr<entity::person> hinata_one{std::move(hinata)};
    SEP;

    pout << "hinata_one: " << NL;
    hinata_one->display_person();
    SEP;


    pout << "hinata: " << NL;
    hinata->display_person();
    SEP;
    */


    // std::unique_ptr<entity::person> hinata{
    // std::make_unique<entity::person>("Hinata", "Chikao", 1001, 54)};

    /* below code encounter with compile time error. because unique
       pointer accepts only one pointer to an object. */
    // std::unique_ptr<entity::person> hinata_two{hinata};


    std::unique_ptr<entity::person> hinata{
            std::make_unique<entity::person>("Hinata", "Chikao", 1001, 54)};
    SEP;

    std::unique_ptr<entity::person> hinata2{std::move(hinata)};
    SEP;


    pout << "hinata2: " << NL;
    hinata2->display_person();
    SEP;

    pout << "hinata: " << NL;
    if (hinata) {
        hinata->display_person();
        SEP;
    } else {
        pout << "hinata object is equals to the nullptr ..." << NL;
    }

    hinata2.reset();

    pout << "\n #(08:29:08): The End ..." << eln;
    return EXIT_SUCCESS;
}
