#include "main.hpp"

int main() {

    albert::oval oval_one{10.36, 85.31, "Oval One"};
    albert::oval oval_two{11.47, 74.42, "Oval Two"};
    albert::oval oval_three{12.58, 63.53, "Oval Three"};

    albert::circle circle_one{12.52, "Circle One"};
    albert::circle circle_two{23.63, "Circle Two"};
    albert::circle circle_three{34.74, "Circle Three"};

    // albert::shape *shapes_one[]{&oval_one,   &oval_two,   &oval_three,
    //                             &circle_one, &circle_two, &circle_three};

    // for (albert::shape *item: shapes_one) {
    //     item->draw();
    // }

    // std::shared_ptr<albert::shape> shapes_two[]{
    //         std::make_shared<albert::oval>(12.36, 56.74, "oval"),
    //         std::make_shared<albert::circle>(58.37, "circle")};

    // for (std::shared_ptr<albert::shape> &item: shapes_two) {
    //     item->draw();
    // }

    std::shared_ptr<albert::shape> shapes_two[]{
            std::make_shared<albert::oval>(oval_one),
            std::make_shared<albert::circle>(circle_one)};

    for (std::shared_ptr<albert::shape> &item: shapes_two) {
        item->draw();
    }


    pout << "\n #(01:21:33): The End ..." << eln;
    return EXIT_SUCCESS;
}
