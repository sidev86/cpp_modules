#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default (fragtrap) constructor" << std::endl;
}

FragTrap::FragTrap(const std::string& _name) : ClapTrap(_name)
{
	std::cout << "Fragtrap constructor" << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_damage = 30;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is so pumped! (Makin' high fives to the guys)" << std::endl; 
} 

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor (fragtrap)" << std::endl;
}
