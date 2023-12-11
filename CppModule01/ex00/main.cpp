#include "Zombie.hpp"

int main()
{
	Zombie data("Umut");
	data.announce();
	Zombie *_data;
	_data = newZombie("Alper");
	_data->announce();
	delete _data;
	randomChump("Lucifer");
}