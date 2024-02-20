#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	int i = 0;
	int num_zombies = 10;
	horde = zombieHorde(num_zombies, "Frank");
	
	while (i < num_zombies)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
}
