#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	Intern someRandomIntern;
	Bureaucrat data("Umut", 40);
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	data.signForm(*rrf);
	data.executeForm(*rrf);
	delete rrf;

	Intern randomIntern;
	AForm* uf;
	uf = randomIntern.makeForm("umut", "umut");

	delete uf;
}