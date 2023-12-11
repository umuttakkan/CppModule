#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Ice default constructor called" << std::endl;
    _type = "ice";
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice &other)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = other;
}

Ice &Ice::operator=(const Ice &data)
{
    std::cout << "Ice copy assignment operator called" << std::endl;
    this->_type = data._type;
    return(*this);
}

AMateria *Ice::clone()const
{
    Ice *data = new Ice();
    return (data);
}

void    Ice::use(ICharacter &data)
{
    std::cout << "* shoots an ice bolt at " << data.getName() << " * " << std::endl;
}

std::string Ice::getType()const
{
    return (_type);
}