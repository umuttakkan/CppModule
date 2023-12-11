#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::string data = "Umut";
    std::string str = "Talha";
    ScavTrap c;
    ClapTrap a(data);
    ScavTrap b(str);

    a.attack(str);
    b.attack(data);
    b.guardGate();
}