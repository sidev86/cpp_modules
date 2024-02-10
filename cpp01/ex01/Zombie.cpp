#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->_name = "noname";
}

Zombie::Zombie(std::string name)
{
	this->setName(name);
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie -> " << this->_name << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;	
}
