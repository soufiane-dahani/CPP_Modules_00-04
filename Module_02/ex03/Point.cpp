#include "Point.hpp"

Point::Point() : x(0), y(0) {}
Point::Point(const float xVal, const float yVal) : x(xVal), y(yVal) {}
Point::Point(const Point& other) : x(other.x), y(other.y) {}
Point& Point::operator=(const Point& other)
{
    if (this != &other)
    {
        this->x = other.x;
        this->y = other.y;
    }
    return *this;
}

Point::~Point()
{
    //std::cout << "destractor" << std::endl;
}

const Fixed& Point::getX() const
{
    return this->x;
}

const Fixed& Point::getY() const
{
    return this->y;
}
