#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
	public:
		Intern();
	 	~Intern();
        Intern(const Intern &);
        Intern &operator=(const Intern &);
		AForm *makeForm(std::string formName, std::string formTarget);
		AForm *shrubberyCreation(std::string target);
		AForm *presidentialPardon(std::string target);
		AForm *robotomyRequest(std::string target);
};

#endif