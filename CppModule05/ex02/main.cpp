#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	{
		Bureaucrat data("Umut", 50);
		AForm *value = new ShrubberyCreationForm("Garden");
		data.signForm(*value);
		data.executeForm(*value);
		delete value;
	}
	{
		Bureaucrat data("Deniz", 40);
		AForm *value = new RobotomyRequestForm("bumblebee");
		data.signForm(*value);
		data.executeForm(*value);
		delete value;
	}
	{
		Bureaucrat data("Eymen", 3);
		AForm *value = new PresidentialPardonForm("Jester");
		data.signForm(*value);
		data.executeForm(*value);
		delete value;
	}

}