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

    // Testing ScavTrap
    {
        ScavTrap scavtrap("ScavTrap1");
        scavtrap.attack("Target2");
        scavtrap.takeDamage(5);
        scavtrap.beRepaired(10);
        scavtrap.attack("Target2");
        scavtrap.guardGate();
    }

    return 0;
}
