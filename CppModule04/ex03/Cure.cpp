#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure default constructor called" << std::endl;
    _type = "cure";
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure &other)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = other;
}

Cure &Cure::operator=(const Cure &data)
{
    std::cout << "AMateria copy assignment operator called" << std::endl;
    this->_type = data._type;
    return (*this);
}

AMateria *Cure::clone()const
{
    Cure *data = new Cure();
    return (data);
}

void    Cure::use(ICharacter &data)
{
    std::cout << "* heals " << data.getName() <<"'s wounds *"<< std::endl;
}

std::string Cure::getType()const
{
    return (_type);
}