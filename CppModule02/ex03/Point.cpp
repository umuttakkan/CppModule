#include "Point.hpp"

Point::Point() : x(0), y(0)
{

}


Point::Point(const float x, const float y) : x(x), y(y)
{

}

Point::~Point()
{

}

Point::Point(const Point &other) : x(other.point_x()), y(other.point_y())
{

}

Point &Point::operator=(Point &a)
{
    (Fixed)this->x = a.x;
    (Fixed)this->y = a.y;

    return (*this);
}

bool Point::operator==(const Point &b) const
{
    if (((Fixed)this->x == b.x ) && ((Fixed)this->y == b.y))
        return (true);
    return (false);
}

Fixed Point::point_x(void)const
{
    return (x);
}

Fixed Point::point_y(void)const
{
    return (y);
}
