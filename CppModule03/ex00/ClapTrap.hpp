#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string Name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;
    public:
        ClapTrap();
        ClapTrap(const ClapTrap &);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &);
        ClapTrap(std::string &Name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif 