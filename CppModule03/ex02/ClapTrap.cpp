#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &x)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    this->attackDamage = x.attackDamage;
    this->energyPoints = x.energyPoints;
    this->hitPoints = x.hitPoints;
    this->Name = x.Name;
    return (*this);
}

ClapTrap::ClapTrap(std::string &Name)
{
    std::cout << "ClabTrap string constructor called" << std::endl;
    this->Name = Name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

void ClapTrap::attack(const std::string& target)
{
    if (energyPoints <= 0)
        std::cout << "no energy points" << std::endl;
    else if (hitPoints <= 0)
        std::cout << "no hit point" << std::endl;
    else
    {
         std::cout << "ClapTrap " << this->Name << " attacks " << target
        << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (energyPoints <= 0)
        std::cout << "no energy points" << std::endl;
    else if (hitPoints <= 0)
        std::cout << "no hit point" << std::endl;
    else
    {
        hitPoints -= amount;
        attackDamage += amount;
        std::cout << "ClapTrap " << this->Name << " causing " << amount << " points of damage!"<< std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints <= 0)
        std::cout << "no energy points" << std::endl;
    else if (hitPoints <= 0)
        std::cout << "no hit point" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->Name << " has been repaired " << amount << " points!" << std::endl;
        hitPoints += amount;
        energyPoints -= 1;
    }
}


