#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &data)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = data;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "RobotomyRequestForm copy operator assigment called " << std::endl; 
    this->target = other.target;
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string newTarget) : AForm::AForm("RobotomyRequestForm", 75, 45)
{
    std::cout << "RobotomyRequestForm string constructor called" << std::endl;
    target = newTarget;
}

void RobotomyRequestForm::AExecute() const
{
    std::cout << "bızzzzzzzzzzzzzzzzzzzzz" << std::endl;

    bool succes = (rand() % 2) == 0;
    if (succes)
        std::cout << target << "has been robotomized succesfully" << std::endl;
    else 
        std::cout << "That the robotomy failed" << std::endl;
}