#include "ClapTrap.hpp"

int	main()
{
	ClapTrap ct1("ct1");  
	ClapTrap ct2("ct2");
	
	ct1.setDamage(3);
	ct1.attack(ct2.getName());
	ct2.takeDamage(ct1.getDamage());
	ct2.getHealthPoints();
	std::cout << ct2.getName() << " Claptrap has " << ct2.getHealthPoints() << " health points" << std::endl;
}
