/*  */

#include <iostream>
#include "../header/utillib.hpp"

class person {

private:
    str first_name_{};
    str last_name_{};
    uint age_{};
    uint temp{};

public:
    person() noexcept {
        /* say hello */
        std::cout << "Hello I am person ...";
    }

    person(crstr name, crstr family, uint age) noexcept :
        first_name_(name), last_name_(family), age_(age) {
        std::cout << "Hello I am " << this->first_name_ << " "
                  << this->last_name_ << NL;
    }

    ~person() noexcept {
        /* destroy the person object */
        std::cout << "Good Bay " << this->first_name_ << NL;
    }

    [[maybe_unused]] void set_first_name(crstr name) noexcept {
        this->first_name_ = name;
    }

    [[maybe_unused]] void set_last_name(crstr family) noexcept {
        this->last_name_ = family;
    }

    [[maybe_unused]] void set_age(uint age) noexcept {
        /* set age */
        this->age_ = age;
    }

    [[maybe_unused]] [[nodiscard]] crstr get_first_name() const noexcept {
        return this->first_name_;
    }

    [[maybe_unused]] [[nodiscard]] crstr get_last_name() const noexcept {
        return this->last_name_;
    }

    [[maybe_unused]] [[nodiscard]] uint get_age() const noexcept {
        /* return age */
        return this->age_;
    }

    // person &operator=(person &rhs) noexcept {
    //     this->first_name_ = rhs.get_first_name();
    //     this->last_name_ = rhs.get_last_name();
    //     this->age_ = rhs.get_age();
    //     return *this;
    // }

    person operator+(person &rhs) noexcept {
        this->first_name_ += rhs.get_first_name();
        this->last_name_ += rhs.get_last_name();
        this->age_ += rhs.get_age();
        return *this;
    }
};

person add_person(person prn1, person prn2) noexcept;

int main() {

    person hinata{"Hinata ", "Chikao ", 54};
    person daniel{"Samuel ", "Becket ", 64};

    person main_result{add_person(hinata, daniel)};

    std::cout << "address of the main_result: " << &main_result << std::endl;

    std::cout << "first name: " << main_result.get_first_name() << std::endl;
    std::cout << "last name: " << main_result.get_last_name() << std::endl;
    std::cout << "age: " << main_result.get_age() << std::endl;

    std::cout << "\n #(20:39:33): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

person add_person(person prn1, person prn2) noexcept {
    person local_person = prn1 + prn2;
    std::cout << "address of the local_person is: " << &local_person << NL;
    return local_person;
}
