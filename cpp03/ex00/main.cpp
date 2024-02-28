#include "ClapTrap.hpp"

int	main()
{
	ClapTrap ct1("ct1");  
	ClapTrap ct2("ct2");
	//ClapTrap ct3;
	
	ct1.setDamage(3);
	ct1.attack(ct2.getName());
	ct1.beRepaired(2);
	std::cout << ct1.getName() << " now has " << ct1.getEnergyPoints() << " energy points" << std::endl;
	ct2.takeDamage(ct1.getDamage());
	std::cout << ct2.getName() << " Claptrap has " << ct2.getHealthPoints() << " health points" << std::endl;
	ct2.beRepaired(1);
	std::cout << ct2.getName() << " Claptrap has " << ct2.getHealthPoints() << " health points" << std::endl;
}
