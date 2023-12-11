#include "Point.hpp"

float area(Point a, Point b, Point c)
{
    float area = ((a.point_x().toFloat() * b.point_y().toFloat()) + (b.point_x().toFloat() * c.point_y().toFloat())
        + (c.point_x().toFloat() * a.point_y().toFloat()) - (b.point_x().toFloat() * a.point_y().toFloat()) 
        - (c.point_x().toFloat() * b.point_y().toFloat()) - (a.point_x().toFloat() * c.point_y().toFloat())) / 2;
    if (area < 0)
        area *= -1;
    return (area);
}

Fixed slope_calculator(Point a, Point b)
{
    Fixed slope;

    slope = (b.point_y() - a.point_y()) / (b.point_x() - a.point_x());
    return (slope); 
}

bool is_edge(Point a, Point b, Point c, Point p)
{
    Fixed x = slope_calculator(a, b);
    Fixed y = slope_calculator(b, c);
    Fixed z = slope_calculator(a, c);
    Fixed d = slope_calculator(p, a);
    Fixed e = slope_calculator(p, b);
    Fixed f = slope_calculator(p, c);
    if (x == d || x == e || y == e || y == f || z == d || z == f)
        return (false);
    return (true);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    if (point == a || point == b || point == c)
    {
        std::cout << "Point is on the vertex "<< std::endl;
        return (false);
    }
    if (!is_edge(a,b,c,point))
    {
        std::cout << "Point is on the edge"<< std::endl;
        return (false);
    }
    float main_area = area(a, b,c);
    float tiny_area_1 = area(point, a, b);
    float tiny_area_2 = area(point, b, c);
    float tiny_area_3 = area(point, a, c);
    return (main_area == (tiny_area_1 + tiny_area_2+ tiny_area_3));
}