#include "Form.hpp"

Form::Form() : Name("unknown"), signGrade(150), execGrade(150)
{
    std::cout << "Form default constructor called" << std::endl;
    signedData = 0;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form::Form(const Form &other) : Name(other.getName()), signGrade(other.getSignGrade()), execGrade(other.getExecGrade())
{
    std::cout << "Form copy constructor called" << std::endl;
    this->signedData = other.signedData;
    *this = other;
}

Form &Form::operator=(const Form &other)
{
    std::cout << "Bureaucrat copy operator assigment called " << std::endl; 
    this->signedData = other.signedData;
    return (*this);
}

Form::Form(const std::string &newName, const int &newSignGrade, const int &newExecGrade) : Name(newName), signGrade(newSignGrade) , execGrade(newExecGrade)
{
    if (execGrade > 150 || signGrade > 150)
        throw Form::GradeTooHighException();
    else if (execGrade < 1 || signGrade < 1)
        throw Form::GradeTooLowException();
    signedData = 0;
}

std::string Form::getName()const
{
    return (Name);
}

int Form::getSignedData()const
{
    return(signedData);
}

int Form::getSignGrade()const
{
    return (signGrade);
}

int Form::getExecGrade()const
{
    return (execGrade);
}

void Form::beSigned(Bureaucrat &x)
{
    if (x.getGrade() <= signGrade)
    {
        signedData = 1;
        std::cout << getName() << " signGrade = " << signGrade << std::endl;        
    }
    else 
        throw  Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("grade is too low");
}