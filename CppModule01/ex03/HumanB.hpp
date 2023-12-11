#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *data;
	public:
		void attack();
		HumanB(std::string name);
		void setWeapon(Weapon &data);
};

#endif
