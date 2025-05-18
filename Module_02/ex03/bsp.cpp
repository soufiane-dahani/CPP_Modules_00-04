#include "Point.hpp"

static Fixed fixedAbs(Fixed value)
{
    return (value < Fixed(0)) ? value * Fixed(-1) : value;
}

Fixed area(Point const &p1, Point const &p2, Point const &p3)
{
     // Area = (1 / 2) * | x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2) |
    return fixedAbs((p1.getX() * (p2.getY() - p3.getY()) +
                     p2.getX() * (p3.getY() - p1.getY()) +
                     p3.getX() * (p1.getY() - p2.getY())) / Fixed(2));
}
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed A  = area(a, b, c);
    Fixed A1 = area(point, b, c);
    Fixed A2 = area(a, point, c);
    Fixed A3 = area(a, b, point);

    if (A1 == Fixed(0) || A2 == Fixed(0) || A3 == Fixed(0))
        return false;
    return (A == A1 + A2 + A3);
}
