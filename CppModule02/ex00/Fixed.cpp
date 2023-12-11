#include "Fixed.hpp"

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
    std::cout << "getRawBits member function called" << std::endl;
    return (x);
}

void Fixed::setRawBits(int const raw)
{
    x = raw;
}
