#include "main.hpp"
#include <typeinfo>

int main() {

    // ramin::shape *shape{new ramin::shape{"Shape One"}};

    ramin::shape *rec_shape{new ramin::rectangle{10, 10, "Rectangle One"}};
    double surface{rec_shape->surface()};
    pout << "the surface of the up rectangle is: " << surface << NL;
    pout << "the type of the rec_shape data type is: "
         << typeid(*rec_shape).name() << NL;
    SEP;

    /* -------- */

    ramin::shape *circle_shape{new ramin::circle{10, "Circle One"}};
    double circle_surface{circle_shape->surface()};
    pout << "the surface of the circle shape is: " << circle_surface << NL;
    pout << "the data type of the circle shape is: "
         << typeid(*circle_shape).name() << NL;
    SEP;


    pout << "\n #(07:23:20): The End ..." << eln;
    return EXIT_SUCCESS;
}
