#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->_name = "noname";
}

Zombie::~Zombie(void)
{
	std::cout << "Destroying zombie -> " << this->_name << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;	
}
