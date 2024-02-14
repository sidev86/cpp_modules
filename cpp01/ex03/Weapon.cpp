#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
	this->setType(weaponType);
}

Weapon::~Weapon(void)
{

}

const std::string& Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(std::string weaponType)
{
	this->_type = weaponType;
}

