#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const Point &other);
        ~Point();
        Fixed point_x(void) const;
        Fixed point_y(void) const;
        Point(const float x, const float y);
        Point &operator=(Point &a);
        bool operator==(const Point &b) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif