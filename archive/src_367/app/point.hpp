#ifndef SRC_APP_POINT_HPP_
#define SRC_APP_POINT_HPP_

#pragma once

#include <ostream>
#include <utility>

namespace raphael {

class point final {

private:
	friend std::ostream& operator<<(std::ostream &out, const point &other)
			noexcept (true);

private:
	double m_x_ { };
	double m_y_ { };

public:
	point() noexcept (true);
	point(double x_param, double y_param) noexcept (true);
	point(const point &other) noexcept (true);
	point(point &&other) noexcept (true);
	~point() noexcept (true);

	void set_x(double x_param) noexcept (true);
	void set_y(double y_param) noexcept (true);

	[[nodiscard]] double get_x() const noexcept (true);
	[[nodiscard]] double get_y() const noexcept (true);

	point& operator=(const point &other) noexcept (true);
	point& operator=(point &&other) noexcept (true);

};

} /* namespace raphael */

#endif /* SRC_APP_POINT_HPP_ */
