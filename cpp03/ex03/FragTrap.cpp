#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& _name) : ClapTrap(_name)
{
	std::cout << "Default constructor (fragtrap)" << std::endl;
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
