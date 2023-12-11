#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    for (size_t i = 0; i < 100; i++)
        ideas[i] = "ideas";
    
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &data)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = data.ideas[i];
    }
    return (*this);
}

std::string *Brain::getIdeas()
{
    return (ideas);
}