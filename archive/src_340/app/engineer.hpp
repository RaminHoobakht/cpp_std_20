#ifndef ENGINEER_HPP
#define ENGINEER_HPP

#pragma once

#include "person.hpp"


namespace albert {

    class alignas(8) engineer : public person {

        using person::person;

    private:
        friend std::ostream &operator<<(std::ostream &out,
                                        const engineer &other) noexcept(true);

    private:
        unsigned int padding{};

    protected:
        unsigned int contract_count_{};


    public:
        /*


        engineer(const engineer &other) noexcept(true);
        */

        engineer() noexcept(true);

        engineer(std::string_view full_name_param, unsigned int age_param,
                 std::string_view address_param,
                 unsigned int contract_count_param) noexcept(true);

        ~engineer() noexcept(true);

        void set_contract_count(unsigned int cc_param) noexcept(true);

        unsigned int get_contract_count() const noexcept(true);

        void build_something() noexcept(true);
    };


} // namespace albert


#endif
