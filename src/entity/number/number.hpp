#ifndef HEADERS_NUMBER_HPP
#define HEADERS_NUMBER_HPP

#pragma once


namespace entity {


	class number final {

	private:
		number friend operator+(const number &lhs, const number &rhs) noexcept;
		number friend operator-(const number &lhs, const number &rhs) noexcept;
		number friend operator/(const number &lhs, const number &rhs) noexcept;
		number friend operator*(const number &lhs, const number &rhs) noexcept;
		number friend operator%(const number &lhs, const number &rhs) noexcept;

	private:
		int num_{};

	public:
		number() noexcept;
		explicit number(int num_param) noexcept;
		~number() noexcept;

		[[maybe_unused]] void set_number(int num_param) noexcept;
		[[nodiscard]] int get_number() const noexcept;


	};

}

#endif /* HEADERS_NUMBER_HPP */