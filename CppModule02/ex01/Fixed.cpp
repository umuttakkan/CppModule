#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    x = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &a)
{
    std::cout << "Copy assignment operator called" << std::endl;
    x = a.getRawBits();
    return (*this);
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
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
    std::cout << "Int constructor called" << std::endl;
    x = data << y;
}

Fixed::Fixed(const float &_data)
{
    std::cout << "Float constructor called" << std::endl;
    x = roundf(_data * (1 << y));
}

std::ostream &operator<<(std::ostream &o, const Fixed &a)
{
    o << a.toFloat();
    return(o);
}