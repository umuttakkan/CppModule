#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    hitPoints= 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

ScavTrap::ScavTrap(std::string &Name) : ClapTrap(Name)
{
    std::cout << "ScavTrap string constructor called" << std::endl;
    hitPoints= 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &data)
{
    std::cout << "ScavTrap copy assigment operator called" << std::endl;
    this->Name = data.Name;
    this->hitPoints = data.hitPoints;
    this->energyPoints = data.energyPoints;
    this->attackDamage = data.attackDamage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    if (hitPoints <= 0)
        std::cout << "ScavTrap " << Name << " is dead" << std::endl;
    else
        std::cout << "ScavTrap " << Name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (energyPoints <= 0)
        std::cout << "no energy points" << std::endl;
    else if (hitPoints <= 0)
        std::cout << "no hit point" << std::endl;
    else
    {
         std::cout << "ScavTrap " << this->Name << " attacks " << target
        << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
    }
}