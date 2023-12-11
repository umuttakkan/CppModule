#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    type = "Cat";
    data = new Brain();
}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete data;
}

void Cat::makeSound()const
{
    std::cout << "Meow! Meow!" << std::endl;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &data)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    this->type = data.type;
    return (*this);
}

Brain *Cat::getBrain()
{
    return (data);
}