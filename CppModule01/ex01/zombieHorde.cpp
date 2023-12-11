#include "Zombie.hpp"
#include "new"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *data = new Zombie[N];
	for (int i = 0; i < N; i++)
		data[i] = Zombie(name);
	return (data);
}