#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
    private:

    public:
        ScavTrap();
        ScavTrap(const ScavTrap &);
        ScavTrap(std::string &Name);
        ScavTrap &operator=(const ScavTrap &data);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string& target);
};

#endif