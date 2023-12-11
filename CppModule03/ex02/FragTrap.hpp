#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(const FragTrap &);
        FragTrap &operator=(const FragTrap &data);
        ~FragTrap();
        FragTrap(std::string &Name);
        void highFivesGuys(void);
};



#endif