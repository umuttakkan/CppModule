#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &data)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = data;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "Bureaucrat copy operator assigment called " << std::endl; 
    this->Grade = other.getGrade();
    return (*this);
}

const std::string Bureaucrat::getName()const
{
    return (Name);
}

int Bureaucrat::getGrade()const
{
    return (Grade);
}

Bureaucrat::Bureaucrat(const std::string newName, int newGrade) : Name(newName)
{
    if (newGrade > 150)
        throw Bureaucrat::GradeTooHighException();
    else if (newGrade < 1)
        throw Bureaucrat::GradeTooLowException();
    Grade = newGrade;
}

void Bureaucrat::incrementGrade()
{
    if (Grade > 1)
        Grade--;
    else 
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::decrementGrade()
{
    if (Grade < 150)
        Grade++;
    else 
        throw Bureaucrat::GradeTooHighException();
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &data)
{
    os << data.getName() << ", bureaucrat grade " << data.getGrade() << std::endl;
    return (os);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade higher than 150");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade low than 1");
}