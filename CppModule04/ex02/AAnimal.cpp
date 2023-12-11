#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal default constructor called" << std::endl;
    type = "unknown";
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &data)
{
    std::cout << "AAnimal copy assignment operator called" << std::endl;
    this->type = data.type;
    return (*this);
}

std::string AAnimal::getType() const
{
    return (type);
}
