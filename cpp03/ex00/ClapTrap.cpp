#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage" << std::endl;
	this->_ep -= 1;
}

void ClapTrap::setDamage(const int damage)
{
	this->_damage = damage;
	std::cout << this->_name << " now hit enemies with " << this->_damage << " points of damage" << std::endl;
}

int ClapTrap::getDamage(void)
{
	return this->_damage;
}

int ClapTrap::getHealthPoints(void)
{
	return this->_hp;
}

int ClapTrap::getEnergyPoints(void)
{
	return this->_ep;
}

std::string ClapTrap::getName(void)
{
	return this->_name;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > 0)
	{
		this->_hp -= amount;
		if (this->_hp < 0)
			this->_hp = 0;
	}
	else
		std::cout << this->_name << " ClapTrap can't take damage anymore.Is already dead" << std::endl; 
	
}
void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
}
