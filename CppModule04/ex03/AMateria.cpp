#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &data)
{
    std::cout << "AMateria copy assignment operator called" << std::endl;
    this->_type = data._type;
    return (*this);
}

std::string const &AMateria::getType() const{
    return (_type);
}

AMateria::AMateria(std::string const & type)
{
    _type = type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria used on " << target.getName() << std::endl;
}