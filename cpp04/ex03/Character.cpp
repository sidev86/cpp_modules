#include "Character.hpp"

Character::Character(const std::string &name) : name(name) 
{
	for (int i = 0; i < 4; ++i)
		inventory[i] = nullptr;
}

Character::~Character() 
{
	for (int i = 0; i < 4; ++i)
		delete inventory[i];
}

std::string const & Character::getName() const 
{ 
	return this->_name; 
}

void Character::equip(AMateria* m) 
{
	for (int i = 0; i < 4; ++i) 
	{
		if (!inventory[i]) 
		{
			inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4) 
	{
		inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target) 
{
	if (idx >= 0 && idx < 4 && inventory[idx]) 
	{
		inventory[idx]->use(target);
	}
}
