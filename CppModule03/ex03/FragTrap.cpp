#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    hitPoints= 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

FragTrap::FragTrap(std::string &Name) : ClapTrap(Name)
{
    std::cout << "FragTrap string constructor called" << std::endl;
    hitPoints= 100;
    energyPoints = 50;
    attackDamage = 20;
}

FragTrap &FragTrap::operator=(const FragTrap &data)
{
    std::cout << "FragTrap copy assigment operator called" << std::endl;
    this->Name = data.Name;
    this->hitPoints = data.hitPoints;
    this->energyPoints = data.energyPoints;
    this->attackDamage = data.attackDamage;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << Name << " says High five, guys!" << std::endl;
}