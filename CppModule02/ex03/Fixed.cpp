#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    x = 0;
}

Fixed::~Fixed()
{

}

Fixed &Fixed::operator=(const Fixed &a)
{
    x = a.getRawBits();
    return (*this);
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

int Fixed::getRawBits(void)const 
{
    return (x);
}

void Fixed::setRawBits(int const raw)
{
    x = raw;
}

float Fixed::toFloat(void) const
{
    return (roundf(x) / (1 << y));
}

int Fixed::toInt(void) const
{
    return(x >> y);
}

Fixed::Fixed(const int &data)
{
    x = data << y;
}

Fixed::Fixed(const float &_data)
{
    x = roundf(_data * (1 << y));
}

std::ostream &operator<<(std::ostream &o, const Fixed &a)
{
    o << a.toFloat();
    return(o);
}

bool Fixed::operator>(const Fixed &b)
{
    return (this->x > b.getRawBits());
}

bool Fixed::operator<(const Fixed &b)
{
    return (this->x < b.getRawBits());
}

bool Fixed::operator>=(const Fixed &b)
{
    return (this->x >= b.getRawBits());
}

bool Fixed::operator<=(const Fixed &b)
{
    return (this->x <= b.getRawBits());
}

bool Fixed::operator==(const Fixed &b)
{
    return (this->x == b.getRawBits());
}

bool Fixed::operator!=(const Fixed &b)
{
    return (this->x == b.getRawBits());
}

Fixed Fixed::operator*(Fixed const &fixed)
{
    Fixed result;
    result.setRawBits((this->getRawBits() * fixed.getRawBits()) >> y);
    return (result);
}

Fixed Fixed::operator+(Fixed const &fixed)
{
    Fixed result;
    result.setRawBits(this->getRawBits() + fixed.getRawBits());
    return (result);
}

Fixed Fixed::operator-(Fixed const &fixed)
{
    Fixed result;
    result.setRawBits(this->getRawBits() - fixed.getRawBits());
    return (result);
}

Fixed Fixed::operator/(Fixed const &fixed)
{
    Fixed result;
    float a = this->getRawBits() >> y;
    float b = fixed.getRawBits() >> y;
    float x = a / b;
    result.setRawBits(x * (1 << y));
    return (result);
}

Fixed &Fixed::operator++()
{
    this->x++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed a(this->toFloat());
    this->x++;
    return (a);
}

Fixed &Fixed::operator--()
{
    this->x--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed a(this->toFloat());
    this->x--;
    return (a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() <= b.getRawBits())
        return (b);
    else 
        return (a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() >= b.getRawBits())
        return (a);
    else 
        return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() <= b.getRawBits())
        return (b);
    else 
        return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() >= b.getRawBits())
        return (a);
    else 
        return (b);
}