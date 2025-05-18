#include "Fixed.hpp"
#include <iostream>
#include <ostream>

Fixed::Fixed() : _value(0)
{
    //std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int value)
{
    //std::cout << "Int constructor called" << std::endl;
    _value = value << _fractionalBits;
}
Fixed::Fixed(const float value)
{
    //std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * 256.0f);
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other): _value(other._value)
{

    //std::cout << "Copy constructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}

float Fixed::toFloat()const
{
    return static_cast<float>(_value) / 256.0f;
}

int Fixed::toInt()const
{
    return _value >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        _value = other._value ;
    }
    return *this;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed result;
    result.setRawBits((this->_value * other._value) >> _fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed result;
    if (other._value == 0)
    {
        std::cerr << "Erro: division by 0" << std::endl;
        return result;
    }
    result.setRawBits((_value << _fractionalBits) / other._value);
    return result;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed result;
    result.setRawBits((this->_value + other._value) >> _fractionalBits);
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed result;
    result.setRawBits((this->_value - other._value) >> _fractionalBits);
    return result;
}

Fixed& Fixed::operator++()
{
    ++_value;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    _value++;
    return temp;
}

Fixed& Fixed::operator--()
{
    --_value;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    _value--;
    return temp;
}

bool Fixed::operator>(const Fixed& other) const
{
    if (this->_value > other._value)
        return true;
    else
     return false;
}

bool Fixed::operator<(const Fixed& other) const
{
    if (this->_value < other._value)
        return true;
    else
     return false;
}

bool Fixed::operator>=(const Fixed& other) const
{
    if (this->_value >= other._value)
        return true;
    else
     return false;
}

bool Fixed::operator<=(const Fixed& other) const
{
    if (this->_value <= other._value)
        return true;
    else
     return false;
}

bool Fixed::operator==(const Fixed& other) const
{
    if (this->_value == other._value)
        return true;
    else
     return false;
}

bool Fixed::operator!=(const Fixed& other) const
{
    if (this->_value != other._value)
        return true;
    else
     return false;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    else
     return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return a;
    else
        return b;
}
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    else
     return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return a;
    else
        return b;
}
