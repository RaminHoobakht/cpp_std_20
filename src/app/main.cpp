/* function overloading */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

/*
    - overload by difference parameter data-types.
    - overload by difference parameter number.
    - overload by parameter order.
    - overload by reference.
    - overload by reference to constant.
    - overload by pointer.
    - overload by pointer to constant.

    * output function has no effect.
    * setting default parameter has no effect.
*/


namespace cpp {

    int max(int a, int b) noexcept;
    int max(int &a, int &b) noexcept;
    int max(const int &a, const int &b) noexcept;
    int max(int *a, int *b) noexcept;
    int max(const int *a, const int *b) noexcept;


    int max(int a, int b) noexcept {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }

    long max(long a = 10, long b = 12) noexcept {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }

    long max(long a = 10, long b = 12, long c = 14) noexcept {
        if (a > b) {
            if (a > c) {
                return a;
            } else {
                return c;
            }
        } else if (b > c) {
            return b;
        } else {
            return c;
        }
    }


    int max(int &a, int &b) noexcept {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }

    int max(const int &a, const int &b) noexcept {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }


    int max(int *a, int *b) noexcept {
        if (a > b) {
            return *a;
        } else {
            return *b;
        }
    }

    int max(const int *a, const int *b) noexcept {
        if (a > b) {
            return *a;
        } else {
            return *b;
        }
    }


    /* encounter with redefinition error */
    //    int max(const int *const a, const int *const b) noexcept {
    //        if (a > b) {
    //            return *a;
    //        } else {
    //            return *b;
    //        }
    //    }


} // namespace cpp


int main() {


    std::cout << "\n #(00:17:04): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
