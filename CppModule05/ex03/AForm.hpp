#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <exception>

class Bureaucrat;

class AForm
{
    private:
        const std::string Name;
        bool      signedData;
        const int signGrade;
        const int execGrade;
    public:
        AForm();
        virtual ~AForm();
        AForm(const AForm &);
        AForm &operator=(const AForm &);
        AForm(const std::string &, const int &, const int &);
        std::string getName()const;
        int getSignedData()const;
        int getSignGrade()const;
        int getExecGrade()const;
        void beSigned(Bureaucrat &x);
        void execute(Bureaucrat const & executor) const;
        virtual void AExecute() const = 0;
        class GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };
        class IsNotSignedException : public std::exception
        {
            const char *what() const throw();
        };
};  

std::ostream &operator<<(std::ostream &os, AForm &data);

#endif