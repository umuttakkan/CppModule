#include "Weapon.hpp"

void  Weapon::setType(std::string data)
{
	type = data;
};

const std::string &Weapon::getType()
{
	return (type);
}

Weapon::Weapon(const std::string value)
{
	type = value;
}