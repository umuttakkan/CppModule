#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
class ClapTrap
{
    protected:
        std::string Name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap();
        ClapTrap(const ClapTrap &);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &);
        ClapTrap(std::string &Name);
        ClapTrap(const std::string &Name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif 