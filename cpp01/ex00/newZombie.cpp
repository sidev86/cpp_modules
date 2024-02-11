#include "Zombie.hpp"

Zombie *newZombie ( std::string name )
{
	Zombie *aZombie = new Zombie;
	aZombie->setName(name);
	return (aZombie);
}
