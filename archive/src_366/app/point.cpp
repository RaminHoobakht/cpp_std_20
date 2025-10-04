#include "point.hpp"

namespace raphael {

point::point() noexcept (true) :
		point { 0.0, 0.0 } {
}

point::point(double x_param, double y_param) noexcept (true) :
		m_x_ { x_param }, m_y_ { y_param } {
}

point::point(const point &other) noexcept (true) :
		m_x_ { other.m_x_ }, m_y_ { other.m_y_ } {
}

point::point(point &&other) noexcept (true) :
		m_x_ { std::exchange(other.m_x_, 0.0) }, m_y_ { std::exchange(
				other.m_y_, 0.0) } {
}

point::~point() noexcept (true) = default;

void point::set_x(double x_param) noexcept (true) {
	m_x_ = x_param;
}

void point::set_y(double y_param) noexcept (true) {
	m_y_ = y_param;
}

_GLIBCXX_NODISCARD
double point::get_x() const noexcept (true) {
	return (m_x_);
}

_GLIBCXX_NODISCARD
double point::get_y() const noexcept (true) {
	return (m_y_);
}

point& point::operator=(const point &other) noexcept (true) {
	if (this != &other) {
		m_x_ = other.m_x_;
		m_y_ = other.m_y_;
	}
	return (*this);
}

point& point::operator=(point &&other) noexcept (true) {
	if (this != &other) {
		m_x_ = std::exchange(other.m_x_, 0.0);
		m_y_ = std::exchange(other.m_y_, 0.0);
	}
	return (*this);
}

/* ---------------------- */

std::ostream& operator<<(std::ostream &out, const point &other) noexcept (true) {
	out << "{ " << "m_x_:" << other.m_x_ << ", " << "m_y_:" << other.m_y_
			<< " }";
	return (out);
}

} /* namespace raphael */
