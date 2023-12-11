#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon &data;
	public:
		void attack();
		HumanA(std::string str, Weapon &data);
};

#endif
