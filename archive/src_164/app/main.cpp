/* function overloading  */

#include <iostream>
#include "../header/overloading.hpp"
#include "../header/utillib.hpp"

#define out std::cout
#define in std::cin
#define log std::clog


int main() {

    int int_arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    double dbl_arr[]{1.12, 2.13, 3.14, 4.15, 5.16,
                     6.17, 7.18, 8.19, 9.21, 10.32};

    size_t size_int_arr{sizeof(int_arr) / sizeof(int_arr[0])};
    size_t size_dbl_arr{sizeof(dbl_arr) / sizeof(dbl_arr[0])};

    int result_int{cpp::max(int_arr, size_int_arr)};
    double result_dbl{cpp::max(dbl_arr, size_dbl_arr)};

    std::cout << std::fixed;
    std::cout << "resut_int: " << result_int << '\n';
    std::cout << "resut_dbl: " << result_dbl << '\n';

    std::cout << "\n #(19:55:32): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
