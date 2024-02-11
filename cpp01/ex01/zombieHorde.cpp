#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *zombieHorde = new Zombie[n];
	int i = 0;
	while (i < n)
	{
		zombieHorde[i].setName(name);
		i++;
	}
	return (zombieHorde);

}
