#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &);
        RobotomyRequestForm(std::string newTarget);
        void AExecute() const;

};


#endif