#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm::AForm("default", 25, 25), target("default")
{    
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &data)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = data;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    std::cout << "PresidentialPardonForm copy operator assigment called " << std::endl;
    this->target = other.target;
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string newTarget) : AForm::AForm("PresidentialPardon", 25, 5)
{
    std::cout << "PresidentialPardonForm string constructor called" << std::endl;
    target = newTarget;
}

void PresidentialPardonForm::AExecute() const 
{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}