/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:53:31 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/05 10:53:33 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void FragTrap::attack(const std::string& target)
{
	if (this->_ep > 0)
	{
		std::cout << "Fragtrap-> " << this->_name << " attacks " << target << " by doing " << this->_damage << " points of damage" << std::endl;
		this->_ep -= 1;
	}
	else
		std::cout << this->_name << " can't attack. no energy " << std::endl;
}


FragTrap::~FragTrap(void)
{
	std::cout << "Destructor (fragtrap)" << std::endl;
}
