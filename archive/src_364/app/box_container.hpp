#ifndef HEADER_BOX_CONTAINER_HPP
#define HEADER_BOX_CONTAINER_HPP


#pragma once

#include <cstddef>
#include <ostream>
#include <utility>
#include "stream_insertable.hpp"

namespace bc {

    class box_container : public si::stream_insertable {

    private:
        friend box_container operator+(const box_container &lhs,
                                       const box_container &rhs) noexcept(true);

    private:
        [[maybe_unused]] void expand(size_t capacity_param) noexcept(true);

    private:
        typedef int value_type;
        static const size_t DEFAULT_CAPACITY = 30;
        static const size_t EXPAND_STEPS = 5;

    private:
        value_type *m_items_;
        size_t m_capacity_{0};
        size_t m_size_{0};

    public:
        /* default constructor */
        box_container() noexcept(true);

        /* parameterized constructor */
        explicit box_container(size_t capacity_param) noexcept(true);

        /* copy constructor */
        box_container(const box_container &other) noexcept(true);

        /* move constructor */
        box_container(box_container &&other) noexcept(true);

        /* destructor */
        ~box_container() noexcept(true);

        /* setter */
        /* I have no function for this section */

        /* getter */
        [[maybe_unused]] [[nodiscard]] value_type *get_items() const
                noexcept(true);

        [[maybe_unused]] [[nodiscard]] value_type get_item(size_t index) const
                noexcept(true);

        [[maybe_unused]] [[nodiscard]] size_t get_capacity() const
                noexcept(true);
        [[maybe_unused]] [[nodiscard]] size_t get_size() const noexcept(true);

        /* copy equality operator overloading */
        [[maybe_unused]] box_container &
        operator=(const box_container &other) noexcept(true);

        /* move equality operator overloading */
        [[maybe_unused]] box_container &
        operator=(box_container &&other) noexcept(true);

        [[maybe_unused]] void
        operator+=(const box_container &other) noexcept(true);

        //[[maybe_unused]] box_container 
        //operator+(const box_container &other) const noexcept(true);

        [[maybe_unused]] void release() noexcept(true);

        [[maybe_unused]] void
        init_stream(std::ostream &out) noexcept(true) override;

        [[maybe_unused]] void dummy_initialize() noexcept(true);

        [[maybe_unused]] void add(const value_type &item) noexcept(true);

        [[maybe_unused]] bool
        remove_item(const value_type &item) noexcept(true);

        [[maybe_unused]] size_t
        remove_all(const value_type &item) noexcept(true);
    };


} // namespace bc

#endif /* HEADER_BOX_CONTAINER_HPP */
