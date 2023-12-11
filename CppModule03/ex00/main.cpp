#include "ClapTrap.hpp"

int main()
{
    std::string data = "Umut";
    std::string str = "Talha";
    ClapTrap a(data);
    ClapTrap b(str);

    a.takeDamage(1);
    for (int i = 0; i< 11; i++)
        a.attack(str);
    b.attack(data);
    b.beRepaired(2);
}