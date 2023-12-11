#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(const FragTrap &);
        FragTrap(std::string &Name);
        FragTrap &operator=(const FragTrap &data);
        ~FragTrap();
        void highFivesGuys(void);
};



#endif