#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << name << " attacks with their " <<  data.getType() << std::endl;
}
HumanA::HumanA(std::string str, Weapon &x) : data(x)
{
	name = str;
}