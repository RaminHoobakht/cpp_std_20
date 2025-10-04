#ifndef HEADER_BOX_CONTAINER_HPP
#define HEADER_BOX_CONTAINER_HPP

#pragma once

#include <ostream>
#include <utility>
#include "index_out_of_range.hpp"

namespace raphael {

template<typename T>
class box_container {

private:
	friend std::ostream& operator<<(std::ostream &out,
			const box_container &other) noexcept (true) {
		out << "{ " << "m_items_:" << "[ ";

		const size_t temp_size { other.m_size_ - 1 };

		for (size_t i { zero_ }; i < temp_size; ++i) {
			out << other.m_items_[i] << ", ";
		}
		out << other.m_items_[temp_size] << " ], ";

		out << "m_capacity_:" << other.m_capacity_ << ", " << "m_size_:"
				<< other.m_size_ << " }";

		return (out);
	}

private:
	void expand(size_t expand_size) noexcept (false) {

		m_capacity_ += expand_size;

		T *temp_items { new T[m_capacity_] { } };

		for (size_t i { zero_ }; i < m_size_; ++i) {
			temp_items[i] = m_items_[i];
		}

		delete[] m_items_;
		m_items_ = nullptr;
		m_items_ = temp_items;
	}

private:
	static constexpr auto default_capacity_ { 10UL };
	static constexpr auto zero_ { 0UL };
	static constexpr auto one_ { 1UL };

private:
	T *m_items_ { };
	size_t m_capacity_ { };
	size_t m_size_ { };

public:
	/* default constructor */
	box_container() noexcept (true) :
			m_capacity_ { default_capacity_ }, m_size_ { zero_ } {
		m_items_ = new T[default_capacity_] { };
	}

	/* parameterized constructor */
	explicit box_container(const size_t capacity_param) noexcept (true) :
			m_capacity_ { capacity_param }, m_size_ { zero_ } {
		m_items_ = new T[m_capacity_] { };
	}

	/* copy constructor */
	box_container(const box_container &other) noexcept (true) :
			m_capacity_ { other.m_capacity_ }, m_size_ { other.m_size_ } {
		m_items_ = new T[m_capacity_] { };
		for (size_t i { zero_ }; i < m_size_; ++i) {
			m_items_[i] = other.m_items_[i];
		}
	}

	/* move constructor */
	box_container(box_container &&other) noexcept (true) :
			m_capacity_ { std::exchange(other.m_capacity_, zero_) }, m_size_ {
					std::exchange(other.m_size_, zero_) } {

		m_items_ = std::move(other.m_items_);
		delete[] other.m_items_;
		other.m_items_ = nullptr;
	}

	/* destructor */
	~box_container() noexcept (true) {
		/* code */
		delete[] m_items_;
	}

	/* capacity getter */
	_GLIBCXX_NODISCARD
	size_t get_capacity() const noexcept (true) {
		return (m_capacity_);
	}

	/* size getter */
	_GLIBCXX_NODISCARD
	size_t get_size() const noexcept (true) {
		return (m_size_);
	}

	/* item getter */
	_GLIBCXX_NODISCARD
	T get_item(const size_t &idx) const noexcept (true) {
		if (idx >= m_size_) {
			throw my_exp::index_out_of_range();
		}
		return (m_items_[idx]);
	}

	/* copy equality operator overloading */
	box_container& operator=(const box_container &other) noexcept (false) {
		if (this != &other) {
			m_capacity_ = other.m_capacity_;
			m_size_ = other.m_size_;

			delete[] m_items_;
			m_items_ = nullptr;

			m_items_ = new T[other.m_capacity_] { };
			for (size_t i { zero_ }; i < other.m_size_; ++i) {
				m_items_[i] = other.m_items_[i];
			}
		}
		return (*this);
	}

	/* move equality operator overloading */
	box_container& operator=(box_container &&other) noexcept (false) {
		if (this != &other) {
			m_capacity_ = std::exchange(other.m_capacity_, zero_);
			m_size_ = std::exchange(other.m_size_, zero_);

			delete[] m_items_;
			m_items_ = nullptr;
			m_items_ = std::move(other.m_items_);
			delete[] other.m_items_;
			other.m_items_ = nullptr;

		}
		return (*this);
	}

	box_container& operator+=(const box_container &other) noexcept (false) {

		for (size_t i { zero_ }; i < other.m_size_; ++i) {
			add_item(other.m_items_[i]);
		}

		return (*this);
	}

	/* ---------------------------------- */

	void add_item(const T &item) noexcept (false) {
		if (m_size_ == m_capacity_) {
			expand(default_capacity_);
		}

		m_items_[m_size_] = item;
		++m_size_;
	}

	_GLIBCXX_NODISCARD
	bool remove_item(const T &item) noexcept (false) {
		bool result { false };
		for (size_t i { zero_ }; i < m_size_; ++i) {
			if (m_items_[i] == item) {
				m_items_[i] = m_items_[m_size_ - one_];
				--m_size_;
				result = true;
				break;
			}
		}
		return (result);
	}

	_GLIBCXX_NODISCARD
	size_t remove_all_item(const T &item) noexcept (false) {
		size_t counter { zero_ };
		for (size_t i { zero_ }; i < m_size_; ++i) {
			if (m_items_[i] == item) {
				m_items_[i] = m_items_[m_size_ - one_];
				--m_size_;
				++counter;
				--i;
			}
		}
		return (counter);
	}
};

} // namespace raphael

#endif
