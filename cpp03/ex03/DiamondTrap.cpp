/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:54:20 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/05 10:54:21 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->_name = name; 
	this->ClapTrap::_name = name + "_clap_name"; 
	
	FragTrap::_hp = 100;
	ScavTrap::_ep = 50;
	FragTrap::_damage = 30;

	std::cout << this->_name << " diamond trap created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor (diamondtrap)" << std::endl;
}


void DiamondTrap::whoAmI(void)
{
	std::cout << "Im a diamondtrap named " << this->_name << " and i'm member of the claptrap " << this->ClapTrap::_name << std::endl;
}
