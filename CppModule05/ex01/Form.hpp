#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <exception>

class Bureaucrat;

class Form
{
    private:
        const std::string Name;
        bool      signedData;
        const int signGrade;
        const int execGrade;
    public:
        Form();
        ~Form();
        Form(const Form &);
        Form &operator=(const Form &);
        Form(const std::string &, const int &, const int &);
        std::string getName()const;
        int getSignedData()const;
        int getSignGrade()const;
        int getExecGrade()const;
        void beSigned(Bureaucrat &x);
        class GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os, Form &data);


#endif