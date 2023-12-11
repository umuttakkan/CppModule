#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	Name = name;
}

void Zombie::announce(void)
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << Name << " is deleted" << std::endl;
}