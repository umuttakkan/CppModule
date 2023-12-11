#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    type = "Dog";
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
void Dog::makeSound()const
{
    std::cout << "Woof! Woof!" << std::endl;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &data)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    this->type = data.type;
    return (*this);
}