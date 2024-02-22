#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
	// Testing ClapTrap
	{
		ClapTrap claptrap("ClapTrap1");
		claptrap.setDamage(3);
		claptrap.attack("Target1");
		claptrap.takeDamage(5);
		claptrap.beRepaired(3);
		claptrap.attack("Target1");
	}

	std::cout << std::endl;

	// Testing FragTrap
	{
		ScavTrap scavtrap("ScavTrap1");
		scavtrap.attack("Target2");
		scavtrap.takeDamage(15);
		scavtrap.beRepaired(8);
		scavtrap.attack("Target2");
		scavtrap.guardGate();
	}

	std::cout << std::endl;

	// Testing FragTrap
	{
		FragTrap fragtrap("FragTrap1");
		fragtrap.attack("Target3");
		fragtrap.takeDamage(6);
		fragtrap.beRepaired(10);
		fragtrap.attack("Target3");
		fragtrap.highFivesGuys();
	}
	return 0;
}
