#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie
{
	private:
		std::string Name;
	public:
		void announce(void);
		Zombie(std::string name);
		Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif