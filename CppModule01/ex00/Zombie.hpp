#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string Name;
	public:
		void announce(void);
		Zombie(std::string Name);
		~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif