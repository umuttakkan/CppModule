#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie data(name);
	data.announce();
}