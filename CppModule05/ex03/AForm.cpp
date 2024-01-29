#include "AForm.hpp"

AForm::AForm() : Name("unknown"), signGrade(150), execGrade(150)
{
    std::cout << "AForm default constructor called" << std::endl;
    signedData = 0;
}

AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(const AForm &other) : Name(other.getName()), signGrade(other.getSignGrade()), execGrade(other.getExecGrade())
{
    std::cout << "AForm copy constructor called" << std::endl;
    this->signedData = other.signedData;
    *this = other;
}

AForm &AForm::operator=(const AForm &other)
{
    std::cout << "Bureaucrat copy operator assigment called " << std::endl; 
    this->signedData = other.signedData;
    return (*this);
}

AForm::AForm(const std::string &newName, const int &newSignGrade, const int &newExecGrade) : Name(newName), signGrade(newSignGrade) , execGrade(newExecGrade)
{
    if (execGrade > 150 || signGrade > 150)
        throw AForm::GradeTooHighException();
    else if (execGrade < 1 || signGrade < 1)
        throw AForm::GradeTooLowException();
    signedData = 0;
}

std::string AForm::getName()const
{
    return (Name);
}

int AForm::getSignedData()const
{
    return(signedData);
}

int AForm::getSignGrade()const
{
    return (signGrade);
}

int AForm::getExecGrade()const
{
    return (execGrade);
}

void AForm::beSigned(Bureaucrat &x)
{
    if (x.getGrade() <= signGrade)
    {
        signedData = 1;
        std::cout << "signGrade = " << signGrade << std::endl;        
    }
    else 
        throw AForm::GradeTooLowException();
}


void AForm::execute(Bureaucrat const & executor) const
{
    if (!signedData)
        throw IsNotSignedException();
    else if (executor.getGrade() >= execGrade)
        throw GradeTooLowException();
    else
    {
        std::cout << executor.getName() << " executed " << Name << std::endl;
        AExecute();
    }
}

const char * AForm::GradeTooHighException::what() const throw()
{
    return ("Form Grade is Too High!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Form Grade is Too Low!");
}

const char *AForm::IsNotSignedException::what() const throw()
{
    return ("Not Signed!");
}