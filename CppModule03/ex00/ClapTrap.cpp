#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &x)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->Attack_damage = x.Attack_damage;
    this->Energy_points = x.Energy_points;
    this->Hit_points = x.Hit_points;
    this->Name = x.Name;
    return (*this);
}

ClapTrap::ClapTrap(std::string &Name)
{
    std::cout << "String constructor called" << std::endl;
    this->Name = Name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

void ClapTrap::attack(const std::string& target)
{
    if (Energy_points <= 0)
        std::cout << "no energy points" << std::endl;
    else if (Hit_points <= 0)
        std::cout << "no hit point" << std::endl;
    else
    {
         std::cout << "ClapTrap " << this->Name << " attacks " << target
        << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_points -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Energy_points <= 0)
        std::cout << "no energy points" << std::endl;
    else if (Hit_points <= 0)
        std::cout << "no hit point" << std::endl;
    else
    {
        Hit_points -= amount;
        Attack_damage += amount;
        std::cout << "ClapTrap " << this->Name << " causing " << amount << " points of damage!"<< std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy_points <= 0)
        std::cout << "no energy points" << std::endl;
    else if (Hit_points <= 0)
        std::cout << "no hit point" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->Name << " has been repaired " << amount << " points!" << std::endl;
        Hit_points += amount;
        Energy_points -= 1;
    }
}
