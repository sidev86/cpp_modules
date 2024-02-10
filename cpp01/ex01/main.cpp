#include "Zombie.hpp"

int	main(void)
{
	Zombie *heapZombie;
	
	heapZombie = newZombie("Frank");
	heapZombie->announce();
	
	randomChump("Oski");
	
	delete (heapZombie);
}
