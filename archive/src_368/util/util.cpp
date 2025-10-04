#include "util.hpp"

namespace util {

void separator(const size_t no, const char ch) noexcept (true) {
	for (size_t i { zero_ }; i < no; ++i) {
		std::cout << ch;
	}
	std::cout << NL;
}

void lf_separator(const size_t no, const char ch) noexcept (true) {
	LF;
	for (size_t i { zero_ }; i < no; ++i) {
		std::cout << ch;
	}
	std::cout << NL;
}

void lf_separator_lf(const size_t no, const char ch) noexcept (true) {
	LF;
	for (size_t i { zero_ }; i < no; ++i) {
		std::cout << ch;
	}
	std::cout << NL;
	LF;
}

std::string& trim(std::string &str, const bool right, const bool left)
		noexcept (true) {

	if (right) {
		while (str[zero_] < 33) {
			str.erase(zero_, one_);
		}
	}

	if (left) {
		while (str[str.size() - one_] < 33) {
			str.erase(str.size() - one_, one_);
		}
	}

	return (str);
}

/* -------------------------------------------------- */

class public_exception final : public std::exception {
private:
	std::string message_ { };

public:
	public_exception() = delete;

	explicit public_exception(const std::string_view message_param) :
			message_ { message_param } {
	}

	_GLIBCXX_NODISCARD const char* what() const noexcept (true) override {
		return (this->message_.c_str());
	}
};

} // namespace util
