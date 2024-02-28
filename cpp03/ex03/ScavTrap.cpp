#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default constructor (scavtrap) called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap constructor" << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_damage = 20;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode" << std::endl; 
} 

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor (scavtrap)" << std::endl;
}
