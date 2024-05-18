/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:53:51 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/05 10:53:52 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default constructor (scavtrap) called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name)
{
	std::cout << "Scavtrap constructor called" << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_damage = 20;
}

void ScavTrap::guardGate(void)
{
	std::cout << "Scavtrap " << this->_name << " is now in gate keeper mode" << std::endl; 
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_ep > 0)
	{
		std::cout << "Scavtrap-> " << this->_name << " attacks " << target << " by doing " << this->_damage << " points of damage" << std::endl;
		this->_ep -= 1;
	}
	else
		std::cout << this->_name << " can't attack. no energy " << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor (scavtrap)" << std::endl;
}
