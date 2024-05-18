/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:47:51 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/05 10:47:53 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _damage(0)
{
	std::cout << "Claptrap constructor called" << std::endl;
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
	if (this->_ep > 0)
	{
		std::cout << this->_name << " attacks " << target << " by doing " << this->_damage << " points of damage" << std::endl;
		this->_ep -= 1;
	}
	else
		std::cout << this->_name << " can't attack. no energy " << std::endl;
	
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

ClapTrap& ClapTrap::operator=( const ClapTrap& other )
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_ep = other._ep;
		this->_damage = other._damage;
	}
	return *this;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp >= 0)
	{
		std::cout << this->_name << " lost " << amount << " hit points." << std::endl;
		this->_hp -= amount;
		if (this->_hp < 0)
			this->_hp = 0;
	}
	if (this->_hp == 0)
		std::cout << this->_name << " is dead" << std::endl; 
	
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep > 0)
	{
		std::cout << this->_name << " repairing by " << amount << std::endl;
		this->_hp += amount;
		this->_ep -= 1;
	}
	else
		std::cout << this->_name << " cant be repaired. no energy." << std::endl; 
}
