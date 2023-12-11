#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << name << " attacks with their " <<  data.getType() << std::endl;
}

HumanB::HumanB(std::string str)
{
	name = str;
}

void HumanB::setWeapon(Weapon &x)
{
	data = x;
}