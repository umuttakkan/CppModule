#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
        ShrubberyCreationForm(std::string newTarget);
        void AExecute() const ;
};


#endif