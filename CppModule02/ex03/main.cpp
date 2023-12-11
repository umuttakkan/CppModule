#include "Point.hpp"

int main()
{
    Point a;
    Point b(5,0);
    Point c(0,5);
    Point d(2,2);
    Point e(0,5);
    Point f(0,2);
    Point g(7,7);

    bool x = bsp(a, b, c, d);
    if (x)
        std::cout << "The point is inside the triangle." << std::endl;
    else
        std::cout << "The point is outside the triangle." << std::endl;
    std::cout << std::endl;

    x = bsp(a, b, c, e);
    if (x)
        std::cout << "The point is inside the triangle." << std::endl;
    else
        std::cout << "The point is outside the triangle." << std::endl;
    std::cout << std::endl;

    x = bsp(a,b,c,f);
    if (x)
        std::cout << "The point is inside the triangle." << std::endl;
    else
        std::cout << "The point is outside the triangle." << std::endl;
    std::cout << std::endl;

    x = bsp(a,b,c,g);
    if (x)
        std::cout << "The point is inside the triangle." << std::endl;
    else
        std::cout << "The point is outside the triangle." << std::endl;
    std::cout << std::endl;
}