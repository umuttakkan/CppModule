#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &data)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    *this = data;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "ShrubberyCreationForm copy operator assigment called " << std::endl; 
    this->target = other.target;
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string newTarget) : AForm::AForm("ShrubberyCreation", 145, 137)
{
    target = newTarget;
}

void ShrubberyCreationForm::AExecute() const
{
    std::string fileName = target + "_shrubbery";
    std::ofstream file(fileName);
    if  (file.good())
    {
        file << "       /\\\n";
        file << "      /__\\\n";
        file << "     /\\  /\\\n";
        file << "    /__\\/__\\\n";
        file << "   /\\      /\\ \n";
        file << "  /__\\____/__\\\n";
        file << " /\\  /\\  /\\  /\\\n";
        file << "/__\\/__\\/__\\/__\\\n";
        file << "       |      \n";
       	file << "       |      \n";
        file << "       |      \n";
        file << "       |      \n";
        file.close();
    }
    else
        std::cout << "File not found" << std::endl;
}