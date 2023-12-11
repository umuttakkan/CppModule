#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    type = "unknown";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound()const
{
    std::cout << "Unknown sound!" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &data)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    this->type = data.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (type);
}
