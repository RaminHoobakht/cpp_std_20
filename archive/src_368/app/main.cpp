#include <iostream>
#include <exception>

namespace cpp {

	template<typename T = int, T maximux = 30>
	class raphael {

		private:
			T value_ { };

		public:
			raphael() noexcept (true) :
					raphael { static_cast<T>(0) } {
			}

			raphael(const T value_param) noexcept (false) :
					value_ { value_param } {
				if (value_ > maximux) {
					throw std::exception();
				}
			}

			~raphael() noexcept (true) = default;

			void set_value(const T value_param) noexcept (false) {
				if (value_param <= maximux) {
					value_ = value_param;
				} else {
					throw std::exception();
				}
			}

			_GLIBCXX_NODISCARD T get_value() const noexcept (true) {
				return (value_);
			}

	};
}

template class cpp::raphael<int, 50>;

int main() {
	std::cout << '\n';

	cpp::raphael<int, 50> raphael_one { 50 };

	std::cout << "value is: " << raphael_one.get_value() << '\n';

	std::cout << "\n #(Sat Sep 28 04:55:56): The End ..." << std::endl;
	return (EXIT_SUCCESS);
}
