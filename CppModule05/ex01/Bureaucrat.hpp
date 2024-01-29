#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string Name;
        int Grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &);
        Bureaucrat &operator=(const Bureaucrat &);
        ~Bureaucrat();
        Bureaucrat(const std::string newName, int newGrade);
        const std::string getName()const;
        int getGrade()const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &form);
        class GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &, Bureaucrat &);

#endif