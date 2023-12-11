#include "Zombie.hpp"
#include <new>

Zombie* newZombie(std::string name)
{
	Zombie *data;

	data = new Zombie(name);
	return (data);
}
