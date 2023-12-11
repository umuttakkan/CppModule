#include <iostream>
#include "Zombie.hpp"

int main ()
{
	Zombie *data;

	data = zombieHorde(4, "Umut");

	for(int i = 0; i < 4; i++)
		data[i].announce();
	delete[] data;
}