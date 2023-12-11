#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Diamond Default Constructor Called" << std::endl;
    FragTrap::hitPoints = 100;
    FragTrap::attackDamage = 30;
    hitPoints = FragTrap::hitPoints;
    attackDamage = FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    std::cout << "DiamondTrap copy constructor called"<< std::endl;
    *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &data)
{
    std::cout << "DiamondTrap Copy Assigment Operator Called" << std::endl;
    this->Name = data.Name;
    return (*this);
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") 
{
    std::cout << "DiamondTrap string constructor called" << std::endl;
    Name = name;
    FragTrap::hitPoints = 100;
    FragTrap::attackDamage = 30;
    hitPoints = FragTrap::hitPoints;
    attackDamage = FragTrap::attackDamage;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << Name << " and ClapTrap name is " << ClapTrap::Name << std::endl;
}

void DiamondTrap::print_value()
{
    std::cout << hitPoints << std::endl << energyPoints << std::endl << attackDamage << std::endl;
}