#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string Name;
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &);
        DiamondTrap &operator=(const DiamondTrap &);
        DiamondTrap(std::string name);
        void whoAmI();
        void print_value();
};

#endif