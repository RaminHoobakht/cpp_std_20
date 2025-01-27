#include <iostream>


int main() {

    /* initialized at compile time */
    constexpr unsigned int eye_count{2};
    constexpr double PI{3.14};

    static_assert(eye_count == 2, "it is ok if it be 2");

    std::cout << "The eye count is: " << eye_count << '\n';
    std::cout << "PI is: " << PI << '\n';

    /* initialized at runtime */
    unsigned int leg_count{2};
    std::cout << "value of leg_count is: " << leg_count << '\n';

    /* encounter with error. because leg_count variable will
       initialized at runtime. */
    constexpr unsigned int arm_count{leg_count};
    std::cout << "value of arm_count is: " << arm_count << '\n';

    constexpr unsigned int room_count{2};
    constexpr unsigned int door_count{room_count};
    std::cout << "value of room_count is: " << room_count << '\n';
    std::cout << "value of door_count is: " << door_count << '\n';

    const unsigned int table_count{2};
    constexpr unsigned int chair_count{table_count * 5};
    std::cout << "value of table_count is: " << table_count << '\n';
    std::cout << "value of chair_count is: " << chair_count << '\n';


    std::cout << "\n #STD20(21:52:33): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
