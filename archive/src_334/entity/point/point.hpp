#ifndef POINT_HPP
#define POINT_HPP

#pragma once

#include <ostream>
#include <utility>
#include "../../entity/integer/integer.hpp"


namespace entity {
    class point final {
    private:
        friend std::ostream &operator<<(std::ostream &os, const point &other) noexcept(true);

        friend void swap(point &lhs, point &rhs) noexcept(true);

        friend std::size_t hash_value(const point *other) noexcept(true);

    private:
        double x_{};
        double y_{};

    public:
        point() noexcept(true);

        point(double x_param) noexcept(true);

        point(double x_param, double y_param) noexcept(true);

        point(const point &other) noexcept(true);

        point(point &&other) noexcept(true);

        ~point() noexcept(true) = default;

        point &operator=(const point &other) noexcept(true);

        point &operator=(point &&other) noexcept(true);

        operator integer() const noexcept(true);
    };
}


#endif //POINT_HPP
