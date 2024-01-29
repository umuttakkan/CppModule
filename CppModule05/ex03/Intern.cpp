#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{    
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern &data)
{
    std::cout << "Intern copy constructor called" << std::endl;
    *this = data;
}

Intern &Intern::operator=(const Intern &other)
{
    std::cout << "Intern copy operator assigment called " << std::endl;
	(void)other;
    return (*this);
}
AForm *Intern::robotomyRequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::presidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::shrubberyCreation(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(std::string formName, std::string forTarget)
{
	Intern intern;

	std::string data[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	size_t i = 0;
	int flag = 0;
	while(i < 3 && data[i] != formName)
		i++;
	if (data[i] == formName)
	{
		std::cout << "Intern creates " << formName << std::endl;
		flag = 1;
	}
	if (!flag)
		std::cout << "Error: Unknown form name" << std::endl;
	else
	{
		AForm* (Intern::*ptr[3])(std::string) = { &Intern::shrubberyCreation, &Intern::robotomyRequest, &Intern::presidentialPardon};
		AForm *data = (intern.*(ptr[i]))(forTarget);
		return (data);
	}
	return (NULL);
}