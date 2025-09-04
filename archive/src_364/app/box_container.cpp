#include <cstddef>
#include <cstdlib>
#include "box_container.hpp"


namespace bc {

    /* I did not implement standard private section's functions */

    /* -------------------------------- */

    /* default constructor */
    box_container::box_container() noexcept(true) :
        m_items_{new value_type[DEFAULT_CAPACITY]},
        m_capacity_{DEFAULT_CAPACITY}, m_size_{0UL} {}

    /* parameterized constructor */
    box_container::box_container(size_t capacity_param) noexcept(true) :
        m_items_{new value_type[capacity_param]}, m_capacity_{capacity_param},
        m_size_{0UL} {}

    /* copy constructor */

    box_container::box_container(const box_container &other) noexcept(true) :
        m_items_{new value_type[other.m_capacity_]},
        m_capacity_{other.m_capacity_}, m_size_{other.m_size_} {

        for (size_t i{0UL}; i < other.get_size(); ++i) {
            *(m_items_ + i) = get_item(i);
        }
    }

    /* move constructor */
    box_container::box_container(box_container &&other) noexcept(true) :
        m_items_{new value_type[other.m_capacity_]},
        m_capacity_{std::exchange(other.m_capacity_, 0)},
        m_size_{std::exchange(other.m_size_, 0)} {

        for (size_t i{0UL}; i < other.m_size_; ++i) {
            *(m_items_ + i) = other.get_item(i);
        }
        other.release();
    }

    /* destructor */
    box_container::~box_container() noexcept(true) {
        /* release memory */
        release();
    }

    /* setter */
    /* I consider no function for setter section */

    /* getter */
    box_container::value_type *box_container::get_items() const noexcept(true) {
        return m_items_;
    }

    box_container::value_type box_container::get_item(size_t index) const
            noexcept(true) {
        return *(m_items_ + index);
    }

    size_t box_container::get_capacity() const noexcept(true) {
        return m_capacity_;
    }

    size_t box_container::get_size() const noexcept(true) { return m_size_; }

    /* copy equality operator overloading */
    box_container &
    box_container::operator=(const box_container &other) noexcept(true) {
        if (this != &other) {
            release();
            m_items_ = new value_type[other.get_capacity()];
            m_capacity_ = other.get_capacity();
            m_size_ = other.get_size();

            for (size_t i{0UL}; i < other.get_size(); ++i) {
                *(m_items_ + i) = get_item(i);
            }
        }
        return *this;
    }

    /* move equality operator overloading */
    box_container &
    box_container::operator=(box_container &&other) noexcept(true) {
        if (this != &other) {
            release();
            m_items_ = new value_type[other.get_capacity()];
            m_capacity_ = std::exchange(other.m_capacity_, 0);
            m_size_ = std::exchange(other.m_size_, 0);

            for (size_t i{0UL}; i < other.get_size(); ++i) {
                *(m_items_ + i) = get_item(i);
            }
            other.release();
        }
        return *this;
    }

    void box_container::operator+=(const box_container &other) noexcept(true) {

        // call expand if needed
        if (m_size_ + other.m_size_ >= m_capacity_) {
            expand(m_size_ + other.m_size_);
        }

        for (size_t i{0UL}; i < other.m_size_; ++i) {
            *(m_items_ + (m_size_ + i)) = *(other.m_items_ + i);
        }

        m_size_ += other.m_size_;
    }

    box_container operator+(const box_container &lhs,
                            const box_container &rhs) noexcept(true) {
        box_container bc_temp{lhs.get_size() + rhs.get_size()};
        bc_temp += lhs;
        bc_temp += rhs;
        return bc_temp;
    }

    //box_container 
    //box_container::operator+(const box_container &other) const noexcept(true) {
    //    box_container new_box{m_size_ + other.m_size_};
    //    new_box += *this;
    //    new_box += other;
    //    return new_box;
    //}

    void box_container::init_stream(std::ostream &out) noexcept(true) {
        out << "{ "
            << "m_capacity_:" << m_capacity_ << ", "
            << "m_size_:" << m_size_ << ", "
            << "m_items_:" << "[ ";

        size_t temp_size = m_size_ - 1;
        for (size_t i{0UL}; i < temp_size; ++i) {
            out << *(m_items_ + i) << ", ";
        }
        out << *(m_items_ + temp_size) << " ]" << " }";
    }

    void box_container::release() noexcept(true) {
        delete[] m_items_;
        m_items_ = nullptr;
    }

    void box_container::dummy_initialize() noexcept(true) {
        if (m_capacity_ >= 10) {
            for (size_t i{0UL}; i < 10; ++i) {
                *(m_items_ + i) = static_cast<int>(i) + 12;
            }
        }
    }

    void box_container::expand(const size_t capacity_param) noexcept(true) {
        if (m_capacity_ >= capacity_param) {
            return;
        }

        int *new_items = new value_type[capacity_param];

        for (size_t i{0UL}; i < m_size_; ++i) {
            *(new_items + i) = *(m_items_ + i);
        }

        m_items_ = new_items;
        m_capacity_ = capacity_param;
    }

    void box_container::add(const value_type &item) noexcept(true) {
        if (m_size_ == m_capacity_) {
            expand(m_size_ + EXPAND_STEPS);
        }
        m_items_[m_size_] = item;
        ++m_size_;
    }

    bool box_container::remove_item(const value_type &item) noexcept(true) {

        size_t index{m_capacity_ + 999};

        for (size_t i{0UL}; i < m_size_; ++i) {
            if (*(m_items_ + i) == item) {
                index = i;
                break;
            }
        }

        if (index > m_capacity_) {
            return false;
        }

        *(m_items_ + index) = *(m_items_ + m_size_ - 1);
        m_size_--;
        return true;
    }

    size_t box_container::remove_all(const value_type &item) noexcept(true) {
        size_t remove_count{0UL};

        bool is_removed{remove_item(item)};
        if (is_removed) {
            remove_count++;
        }

        while (is_removed) {
            is_removed = remove_item(item);
            if (is_removed) {
                remove_count++;
            }
        }

        return remove_count;
    }

} // namespace bc
